/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:11:46 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 15:11:47 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_d;
	size_t	s_s;
	size_t	i;
	size_t	j;

	s_d = ft_strlen(dst);
	s_s = ft_strlen(src);
	i = s_d;
	j = 0;
	if (size <= 0)
		return (s_s);
	else if (s_d >= size)
		return (size + s_s);
	if (size != 0)
	{
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;
	}
	return (s_d + s_s);
}
