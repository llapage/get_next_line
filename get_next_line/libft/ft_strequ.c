/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:03:53 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 18:12:16 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*new_s1;
	char	*new_s2;
	int		i;

	new_s1 = (char*)s1;
	new_s2 = (char*)s2;
	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	i = 0;
	while (new_s1[i] && new_s2[i])
	{
		if (new_s1[i] != new_s2[i])
			return (0);
		i++;
	}
	return (1);
}
