/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelkerf <jbelkerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:10:18 by jbelkerf          #+#    #+#             */
/*   Updated: 2024/10/21 15:10:19 by jbelkerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
	{
		return (c - i);
	}
	return (c);
}