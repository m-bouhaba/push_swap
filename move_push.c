/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:16:14 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 21:44:21 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_node **a, t_node **b, char c, int i)
{
	t_node	*new;
	t_node	*stak_a;
	t_node	*stak_b;
	int		data;
	int		index;

	if ((*a) == NULL)
		return ;
	stak_a = (*a);
	stak_b = (*b);
	data = stak_a->data;
	index = stak_a->index;
	new = create_node(data, index);
	add_front(b, new);
	delete_node(a);
	if (c == 'b' && i == 1)
		write(1, "pb\n", 3);
}

void	push_a(t_node **a, t_node **b, char c, int i)
{
	t_node	*new;
	t_node	*stak_a;
	t_node	*stak_b;
	int		data;
	int		index;

	if ((*b) == NULL)
		return ;
	stak_a = (*a);
	stak_b = (*b);
	data = stak_b->data;
	index = stak_b->index;
	new = create_node(data, index);
	add_front(a, new);
	delete_node(b);
	if (c == 'a' && i == 1)
		write (1, "pa\n", 3);
}
