/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort234.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:14:45 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 22:15:25 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_node **a)
{
	if ((*a)->data > (*a)->next->data)
		ft_swap (a, 'a', 1);
}

void	ft_sort3(t_node **a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*a)->data;
	n2 = (*a)->next->data;
	n3 = (*a)->next->next->data;
	if (n1 < n2 && n1 < n3 && n2 > n3)
	{
		rrx(a, 'a', 1);
		ft_swap(a, 'a', 1);
	}
	if (n1 > n2 && n1 < n3 && n2 < n3)
		ft_swap(a, 'a', 1);
	if (n1 < n2 && n1 > n3 && n2 > n3)
		rrx(a, 'a', 1);
	if (n1 > n2 && n1 > n3 && n2 < n3)
		rx(a, 'a', 1);
	if (n1 > n2 && n1 > n3 && n2 > n3)
	{
		rx(a, 'a', 1);
		ft_swap (a, 'a', 1);
	}
}

void	sort4_pos2(t_node **a, t_node **b)
{
	rx(a, 'a', 1);
	rx(a, 'a', 1);
	push_b(a, b, 'b', 1);
	ft_sort3(a);
	push_a(a, b, 'a', 1);
}

void	sort4_pos3(t_node **a, t_node **b)
{
	rrx(a, 'a', 1);
	push_b(a, b, 'b', 1);
	ft_sort3(a);
	push_a(a, b, 'a', 1);
}

void	ft_sort4(t_node **a, t_node **b)
{
	int		position;

	position = min_position(a);
	if (position == 0)
	{
		push_b(a, b, 'b', 1);
		ft_sort3(a);
		push_a(a, b, 'a', 1);
	}
	if (position == 1)
	{
		ft_swap(a, 'a', 1);
		push_b(a, b, 'b', 1);
		ft_sort3(a);
		push_a(a, b, 'a', 1);
	}
	if (position == 2)
		sort4_pos2(a, b);
	if (position == 3)
		sort4_pos3(a, b);
}
