/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:30:45 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 23:04:15 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rx(t_node **a, char c, int i)
{
	t_node	*tmp;

	if ((*a) == NULL)
		return ;
	tmp = (*a);
	(*a) = (*a)->next;
	tmp->next = NULL;
	add_back (a, tmp);
	if (c == 'a' && i == 1)
		write(1, "ra\n", 3);
	else if (c == 'b' && i == 1)
		write(1, "rb\n", 3);
}

void	ft_rr(t_node **a, t_node **b)
{
	if ((*a) != NULL && (*b) != NULL)
	{
		rx(a, 'a', 0);
		rx(b, 'b', 0);
	}
}

void	rrx(t_node **a, char c, int i)
{
	t_node	*tmp;
	t_node	*tmp2;

	if ((*a) == NULL)
		return ;
	tmp = (*a);
	tmp2 = (*a);
	while (tmp->next)
		tmp = tmp->next;
	if (tmp2->next)
	{
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		add_front(a, tmp);
		tmp2->next = NULL;
	}
	if (c == 'a' && i == 1)
		write(1, "rra\n", 4);
	else if (c == 'b' && i == 1)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_node **a, t_node **b)
{
	if ((*a) != NULL && (*b) != NULL)
	{
		rrx(a, 'a', 0);
		rrx(b, 'b', 0);
	}
}
