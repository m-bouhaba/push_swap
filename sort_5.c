/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:12:14 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 22:15:05 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5_pos3(t_node **a, t_node **b)
{
	rrx(a, 'a', 1);
	rrx(a, 'a', 1);
	push_b(a, b, 'b', 1);
	ft_sort4(a, b);
	push_a(a, b, 'a', 1);
}

void	sort5_pos4(t_node **a, t_node **b)
{
	rrx(a, 'a', 1);
	push_b(a, b, 'b', 1);
	ft_sort4(a, b);
	push_a(a, b, 'a', 1);
}

void	sort5_pos2(t_node **a, t_node **b)
{
	rx(a, 'a', 1);
	rx(a, 'a', 1);
	push_b(a, b, 'b', 1);
	ft_sort4(a, b);
	push_a(a, b, 'a', 1);
}

void	ft_sort5(t_node **a, t_node **b)
{
	int	position;

	position = min_position(a);
	if (position == 0)
	{
		push_b(a, b, 'b', 1);
		ft_sort4(a, b);
		push_a(a, b, 'a', 1);
	}
	if (position == 1)
	{
		ft_swap(a, 'a', 1);
		push_b(a, b, 'b', 1);
		ft_sort4(a, b);
		push_a(a, b, 'a', 1);
	}
	if (position == 2)
		sort5_pos2(a, b);
	if (position == 3)
		sort5_pos3(a, b);
	if (position == 4)
		sort5_pos4(a, b);
}
