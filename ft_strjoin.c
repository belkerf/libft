/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:26 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/22 11:04:19 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*re;
	int		i;
	int		j;

	j = 0;
	i = 0;
	re = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (re == NULL)
		return (NULL);
	while (s1[i])
	{
		re[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		re[j] = s2[i];
		i++;
		j++;
	}
	re[j] = 0;
	return (re);
}
