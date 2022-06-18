/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:05:17 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 20:21:03 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		i;

	a = NULL;
	b = NULL;
	if (ac == 2 || check_empty(av))
		ft_error();
	check(av);
	i = 0;
	while (av[++i])
		init_stack(&a, ft_atoi(av[i]), 0);
	stack_index (&a);
	if (ac == 3)
		ft_sort2(&a);
	else if (ac == 4)
		ft_sort3(&a);
	else if (ac == 5)
		ft_sort4(&a, &b);
	else if (ac == 6)
		ft_sort5(&a, &b);
	else if (ac > 6)
		push_a_b(&a, &b);
}
