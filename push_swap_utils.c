/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:01:24 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:04:07 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	check_char(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if ((str[i][0] == '-' && (str[i][j + 1] >= '0' \
			&& str[i][j + 1] <= '9')) \
			|| (str[i][0] == '+' && (str[i][j + 1] >= '0' \
			&& str[i][j + 1] <= '9')))
				j++;
			if (!ft_isdigit(str[i][j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_double(char **str)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 1;
	while (str[i])
	{
		a = ft_atoi(str[i]);
		j = i + 1;
		while (str[j])
		{
			b = ft_atoi(str[j]);
			if (a == b)
			{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	check_if_sorted(char **str)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	while (str[i])
	{
		a = ft_atoi(str[i]);
		j = i + 1;
		while (str[j])
		{
			b = ft_atoi(str[j]);
			if (a > b)
				return ;
			j++;
		}
		i++;
	}
	exit(EXIT_FAILURE);
}

int	check_empty(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (strcmp(str[i], "") == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
