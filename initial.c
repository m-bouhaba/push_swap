/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:42:43 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 20:36:01 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_node **a)
{
	t_node	*temp;
	int		size;

	temp = (*a);
	size = 0;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

void	init_stack(t_node **a, int data, int index)
{
	t_node	*new;

	new = create_node(data, index);
	add_back(a, new);
}

void	check(char **av)
{
	check_char(av);
	check_double(av);
	check_if_sorted(av);
}

void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
