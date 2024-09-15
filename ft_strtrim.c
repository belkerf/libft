/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:01:35 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/09/09 15:57:30 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char	*re;
	char	*er;

	re = ft_strdup(s1);
	if (*set == '\0' || *s1 == '\0')
		return (re);
	while (*re)
	{
		if (is_set(*re, set))
			re++;
		else
			break ;
	}
	i = ft_strlen(re);
	i--;
	while (is_set(re[i], set))
	{
		re[i] = 0;
		i--;
	}
	er = ft_strdup(re);
	free(re);
	return (er);
}
