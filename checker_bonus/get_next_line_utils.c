/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:35:09 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/06/18 17:15:04 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char *s, int start, int len)
{
	int		i;
	char	*ptr;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (i < len && s[i])
		i++;
	ptr = malloc ((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (j < i)
		ptr[j++] = s[start++];
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		a;
	int		b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	new = malloc ((a + b + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < a)
		new[i++] = s1[j++];
	j = 0;
	while (j < b)
		new[i++] = s2[j++];
	new[i] = '\0';
	free (s1);
	return (new);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
