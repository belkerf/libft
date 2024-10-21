/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:42 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 16:34:10 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s);
	l++;
	d = (char *)malloc(l * sizeof(char));
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}
