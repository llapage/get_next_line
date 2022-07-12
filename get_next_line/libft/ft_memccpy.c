/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:52:40 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 17:10:33 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*memdest;
	unsigned char	*memsrc;

	memdest = (unsigned char*)dest;
	memsrc = (unsigned char*)src;
	while (n--)
	{
		*memdest = *memsrc;
		if (*memdest == (unsigned char)c)
			return (memdest + 1);
		memdest++;
		memsrc++;
	}
	return (NULL);
}
