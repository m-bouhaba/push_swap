/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:50:03 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 23:05:29 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **a, char c, int i)
{
	t_node	*temp;

	if ((*a) == NULL)
		return ;
	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = (*a);
	(*a) = temp;
	if (c == 'a' && i == 1)
		write (1, "sa\n", 3);
	else if (c == 'b' && i == 1)
		write (1, "sb\n", 3);
}

void	ft_ss(t_node **a, t_node **b)
{
	if ((*a) != NULL && (*b) != NULL)
	{
		ft_swap(a, 'a', 0);
		ft_swap(b, 'b', 0);
	}
}
