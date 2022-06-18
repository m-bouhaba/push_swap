/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:23:15 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 20:25:27 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves(t_node **a, t_node **b, char *str)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		ft_swap(a, 'a', 0);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		ft_swap(b, 'b', 0);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		rx(a, 'a', 0);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rx(b, 'b', 0);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rrx(a, 'a', 0);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrx(b, 'c', 0);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		push_a(a, b, 'a', 0);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		push_b(a, b, 'b', 0);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		ft_rrr(a, b);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		ft_rr(a, b);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ft_ss(a, b);
	else
		ft_error();
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	char	*str;
	int		i;

	if (ac > 1)
	{
		i = 0;
		while (av[++i])
			init_stack(&a, ft_atoi(av[i]), 0);
		check_char(av);
		check_double(av);
		str = get_next_line(0);
		while (str)
		{
			moves(&a, &b, str);
			free (str);
			str = get_next_line(0);
		}
		ok_ko(&a, &b);
	}
	return (0);
}
