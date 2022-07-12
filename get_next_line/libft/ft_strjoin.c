/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:50:26 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 16:57:39 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strout;
	char	*strin;

	if (s1 && s2)
	{
		strin = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (strin)
		{
			strout = strin;
			while (*s1 != 0)
				*strin++ = *s1++;
			while (*s2 != 0)
				*strin++ = *s2++;
			return (strout);
		}
		return (NULL);
	}
	return (NULL);
}
