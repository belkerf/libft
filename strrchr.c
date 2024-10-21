/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:10:29 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 15:10:30 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*r;
	int		i;

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
