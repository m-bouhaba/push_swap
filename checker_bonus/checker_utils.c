/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:59:37 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:15:11 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && i < (n - 1) && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int	check_sort(t_node **a)
{
	t_node	*tmp;

	if ((*a) == NULL)
		return (0);
	tmp = (*a);
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	is_empty(t_node **a)
{
	if (*a == NULL)
		return (0);
	return (1);
}

void	ok_ko(t_node **a, t_node **b)
{
	if (!check_sort(a) && is_empty(b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
