/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:24:14 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:15:01 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_len(int fd, char *a)
{
	char	*buff;
	int		count;

	buff = malloc (2);
	count = 1;
	while (ft_strchr(a) == 0 && count)
	{
		count = read(fd, buff, 1);
		if (count == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[count] = '\0';
		a = ft_strjoin(a, buff);
	}
	free(buff);
	return (a);
}

char	*before_n(char *a)
{
	int	i;

	i = 0;
	if (!a[0])
		return (NULL);
	while (a[i] && a[i] != '\n')
		i++;
	return (ft_substr(a, 0, i + 1));
}

char	*after_n(char *a)
{
	int		i;
	char	*str;

	i = 0;
	if (!a)
		return (NULL);
	while (a[i])
	{
		if (a[i] == '\n')
		{
			str = ft_substr(a, i + 1, ft_strlen(a));
			free (a);
			return (str);
		}
		i++;
	}
	free (a);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*a;
	char		*l;

	if (fd < 0)
		return (NULL);
	a = get_len(fd, a);
	if (!a)
		return (NULL);
	l = before_n(a);
	a = after_n(a);
	return (l);
}
