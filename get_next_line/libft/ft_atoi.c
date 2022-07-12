/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 13:48:44 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 15:56:43 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	negative;
	int	i;
	int	result;

	negative = 1;
	i = 0;
	result = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || 57 < str[i])
			return (result * negative);
		else
			result = (result * 10) + (int)(str[i] - '0');
		i++;
	}
	return (result * negative);
}
