/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:00:27 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 16:40:32 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	w;

	w = 0;
	while (n != 0)
	{
		n = n / 10;
		w++;
	}
	return (w);
}

char	*ft_itoa(int n)
{
	char	*cas;
	char	*re;
	int		w;
	int		i;

	i = 0;
	cas = "-2147483648";
	if (n == 0)
	{
		re = (char *)malloc(2);
		re[0] = '0';
		re[1] = 0;
		return (re);
	}
	if (n == -2147483648)
	{
		re = (char *)malloc(12 * sizeof(char));
		while (i < 12)
		{
			re[i] = cas[i];
			i++;
		}
		return (re);
	}
	w = count(n);
	if (n < 0)
	{
		re = (char *)malloc((w + 2) * sizeof(char));
		re[0] = '-';
		n = n * (-1);
		i = w + 1;
	}
	else
	{
		re = (char *)malloc((w + 1) * sizeof(char));
		i = w;
	}
	re[i] = 0;
	while (n != 0)
	{
		re[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (re);
}
