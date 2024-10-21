/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:38 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 16:31:08 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	char	*p;
	size_t	j;
	size_t	i;

	if (*lil == '\0')
		return ((char *)big);
	i = 0;
	while (*big)
	{
		j = 0;
		if (*big == lil[j])
		{
			p = (char *)big;
			while (i < len && lil[j] && *big)
			{
				if (*big != lil[j])
					break ;
				j++;
				big++;
				i++;
			}
			if (lil[j] == '\0')
				return (p);
			big = p;
			i = i - j;
		}
		i++;
		big++;
	}
	return (0);
}
