/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:05:38 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 21:12:01 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	j;
	size_t	i;
	char	*p;

	if (*lil == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		if (big[i] == lil[j])
		{
			while (i + j < len && lil[j] && big[i])
			{
				if (big[i + j] != lil[j])
					break ;
				j++;
			}
			p = (char *)(big + i);
			if (lil[j] == '\0')
				return (p);
		}
		i++;
	}
	return (0);
}
