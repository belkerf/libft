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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_s;
	size_t		i;
	char		*sub;

	s_s = ft_strlen(s);
	i = 0;
	if (s_s < start)
	{
		sub = (char *)malloc(1);
		*sub = 0;
		return (sub);
	}
	if (s_s - start < len)
		len = s_s - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}
