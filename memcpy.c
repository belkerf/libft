/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:12:02 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 15:12:03 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*b;
	char	*s;
	size_t	i;

	if (n == 0)
		return (dest);
	b = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		b[i] = s[i];
		i++;
	}
	return (dest);
}
