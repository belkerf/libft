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

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*p;
	char	*r;

	if (c >= 1024)
		c = c - 1024;
	if (c > 256)
		c = c - 256;
	i = 0;
	p = (char *)s;
	while (*p)
	{
		if (*p == c)
		{
			r = p;
			i++;
		}
		p++;
	}
	if (c == '\0')
		return (p);
	if (i != 0)
		return (r);
	else
		return (0);
}
