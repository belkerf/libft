/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:11:49 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 15:11:50 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*p;

	if (c >= 1024)
		c = c - 1024;
	if (c > 256)
		c = c - 256;
	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == '\0')
		return (p);
	else
		return (0);
}
