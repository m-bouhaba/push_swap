/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:01:06 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/17 23:20:14 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *s )
{
	int				sign;
	unsigned long	result;

	sign = 1;
	result = 0;
	while (*s == 32 || (*s >= 7 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= (-1);
			s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10) + (*s - 48);
		s++;
	}
	if ((result > 2147483647 && sign == 1) \
	|| (result > 2147483648 && sign == -1))
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return (result * sign);
}
