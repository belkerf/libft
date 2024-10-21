/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:57 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 21:53:49 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_word(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			w++;
			while (s[i] != c && s[i])
				i++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (w);
}

int	c_count(const char *s, char c, int i)
{
	int	w;

	w = 0;
	while (s[i] != c && s[i])
	{
		w++;
		i++;
	}
	return (w);
}

char	*ff_copy(const char *s, char *re, char c, int i)
{
	int	j;
	int	w_c;

	w_c = c_count(s, c, i);
	re = (char *)malloc((w_c + 1) * sizeof(char));
	j = 0;
	while (s[i] != c && s[i])
	{
		re[j] = s[i];
		i++;
		j++;
	}
	re[j] = '\0';
	return (re);
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	int		w_c;
	int		i;
	int		j;

	j = 0;
	i = 0;
	w_c = c_word(s, c);
	re = (char **)malloc((w_c + 1) * sizeof(char *));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			w_c = c_count(s, c, i);
			re[j] = ff_copy(s, re[j], c, i);
			i = i + w_c;
			j++;
		}
	}
	re[j] = 0;
	return (re);
}
