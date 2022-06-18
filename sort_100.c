/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:15:04 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:02:24 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_b(t_node **a, t_node **b)
{
	int		c;
	t_ab	var;

	var.size = stack_size(a);
	while (var.size > 5)
	{
		if (var.size <= 100)
			var.push = ((stack_size(a) - 5) / 3) + 1;
		if (var.size >= 100)
			var.push = ((stack_size(a) - 5) / 5) + 1;
		var.min = asghar_index(a);
		var.max = (var.push + var.min) - 1;
		var.med = (var.min + var.max) / 2;
		while (var.push > 0)
		{
			c = find_position_min_max(a, &var);
			if (c > var.size / 2)
				var.push = do_rr (a, b, &var, c);
			else if (c <= var.size / 2)
				var.push = do_r(a, b, &var, c);
		}
		var.size = stack_size(a);
	}
	ft_sort5(a, b);
	push_b_a(a, b);
}

void	pa_ra(t_node **a, t_node **b)
{
	push_a(a, b, 'a', 1);
	rx(a, 'a', 1);
}

void	push_b_a(t_node **a, t_node **b)
{
	int	c;

	last_node(a)->index = -1;
	while (stack_size(b))
	{
		if (last_node(a)->index == ((*a)->index - 1))
			rrx(a, 'a', 1);
		else if (((*a)->index - 1) == (*b)->index)
			push_a(a, b, 'a', 1);
		else if ((*b)->index < (*a)->index && (*b)->index > last_node(a)->index)
			pa_ra(a, b);
		else
		{
			c = (*a)->index - 1;
			if (find_position_index(b, (*a)->index - 1) <= stack_size(b) / 2)
				while (c != (*b)->index)
					rx(b, 'b', 1);
			else
				while (c != (*b)->index)
					rrx(b, 'b', 1);
			push_a(a, b, 'a', 1);
		}
	}
	while (last_node(a)->index != -1)
		rrx(a, 'a', 1);
}
