/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_cent2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:49:21 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 15:32:47 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	*array(t_node **a)
{
	t_node	*temp;
	int		i;
	int		len;
	int		*arr;

	temp = (*a);
	i = 0;
	len = stack_size(a);
	arr = malloc(sizeof(int) * (len + 1));
	while (temp && i < len)
	{
		arr[i] = temp->data;
		temp = temp->next;
		i++;
	}
	arr[i] = '\0';
	ft_sort_int_tab(arr, len);
	return (arr);
}

int	index_dyal_data(t_node **a, int *tab, int data)
{
	int	i;
	int	size;

	i = 0;
	size = stack_size(a);
	while (i < size)
	{
		if (tab[i] == data)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void	stack_index(t_node **a)
{
	t_node	*temp;
	int		*tab;

	temp = (*a);
	tab = array(a);
	while (temp)
	{
		temp->index = index_dyal_data(a, tab, temp->data);
		temp = temp->next;
	}
	free (tab);
}

int	find_position_index(t_node **a, int k)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = (*a);
	while (tmp)
	{
		if (tmp->index == k)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
