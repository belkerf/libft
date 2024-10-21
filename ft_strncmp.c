/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:49 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 16:31:59 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 == c2)
			i++;
		else
			return (c1 - c2);
	}
	c1 = s1[i];
	c2 = s2[i];
	if (i == n)
		return (0);
	return (c1 - c2);
}
