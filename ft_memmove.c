/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:09:20 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/22 10:51:49 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	char	*t;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (d == 0 && s == 0)
		return (0);
	t = (char *)malloc(n * sizeof(char));
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = t[i];
		i++;
	}
	return (dest);
}
