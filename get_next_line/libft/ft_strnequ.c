/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:48:38 by llapage           #+#    #+#             */
/*   Updated: 2018/07/05 15:36:07 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*new_s1;
	char	*new_s2;
	size_t	i;

	new_s1 = (char*)s1;
	new_s2 = (char*)s2;
	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	while (new_s1[i] && new_s2[i] && n > i)
	{
		if (new_s1[i] != new_s2[i])
			return (0);
		i++;
	}
	return (1);
}
