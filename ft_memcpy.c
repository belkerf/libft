/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:09:13 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/22 10:47:21 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*b;
	char	*s;
	size_t	i;

	b = (char *)dest;
	s = (char *)src;
	if (n == 0)
		return (dest);
	if (b == NULL && s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		b[i] = s[i];
		i++;
	}
	return (dest);
}
