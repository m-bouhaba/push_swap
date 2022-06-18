/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:49:25 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:05:06 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int data, int index)
{
	t_node	*new;

	new = malloc(sizeof (t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = index;
	new->next = NULL;
	return (new);
}

void	add_back(t_node **a, t_node *new)
{
	t_node	*temp;

	if (*a == NULL)
	{
		*a = new;
		new->next = NULL;
	}
	else
	{
		temp = (*a);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
	}
}

void	add_front(t_node **a, t_node *new)
{
	if (*a != NULL)
	{
		new->next = *a;
		*a = new;
	}
	else
		*a = new;
}

void	delete_node(t_node **a)
{
	t_node	*tmp;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	tmp = (*a);
	(*a) = (*a)->next;
	free(tmp);
}

t_node	*last_node(t_node **a)
{
	t_node	*temp;

	temp = (*a);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
