/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:44:14 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 17:24:32 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *strsrc;
	char *strdst;

	strsrc = (char *)src;
	strdst = (char *)dst;
	if (strsrc < strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (len > 0)
		{
			*strdst-- = *strsrc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*strdst++ = *strsrc++;
			len--;
		}
	}
	return (dst);
}
