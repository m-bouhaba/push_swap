/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:25:18 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 22:09:49 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_node **a, int k)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = (*a);
	while (tmp)
	{
		if (tmp->data == k)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

int	min_position(t_node **a)
{
	int		k;
	int		n;
	int		i;
	int		p;
	t_node	*tmp;

	i = 0;
	tmp = (*a);
	k = tmp->data;
	while (tmp->next)
	{
		n = tmp->next->data;
		if (k > n)
			k = n;
		tmp = tmp->next;
	}
	p = find_position(a, k);
	return (p);
}
