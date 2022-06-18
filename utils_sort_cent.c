/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_cent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:26:58 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 15:54:58 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	asghar_index(t_node **a)
{
	t_node	*temp;
	int		min;

	temp = (*a);
	min = temp->index;
	while (temp)
	{
		if (min > temp->index)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}

int	find_position_min_max(t_node **a, t_ab *var)
{
	t_node	*temp;
	int		i;

	temp = (*a);
	i = 0;
	while (temp)
	{
		if (temp->index >= var->min && temp->index <= var->max)
			return (i);
		i++;
		temp = temp->next;
	}
	return (i);
}

int	do_r(t_node **a, t_node **b, t_ab *var, int c)
{
	c = find_position_min_max(a, var);
	while (c <= var->size / 2)
	{
		if ((*a)->index >= var->min && (*a)->index <= var->max)
		{
			push_b(a, b, 'b', 1);
			if ((*b)->index < var->med)
				rx(b, 'b', 1);
			var->push--;
			if (var->push == 0)
				break ;
		}
		else
			rx(a, 'a', 1);
			c++;
	}
	return (var->push);
}

int	do_rr(t_node **a, t_node **b, t_ab *var, int c)
{
	c = find_position_min_max(a, var);
	while (c > var->size / 2)
	{
		if ((*a)->index >= var->min && (*a)->index <= var->max)
		{
			push_b(a, b, 'b', 1);
			if ((*b)->index < var->med)
				rx(b, 'b', 1);
			var->push--;
			if (var->push == 0)
				break ;
		}
		else
			rrx(a, 'a', 1);
			c--;
	}
	return (var->push);
}
