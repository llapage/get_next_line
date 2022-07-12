/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:35:36 by llapage           #+#    #+#             */
/*   Updated: 2018/10/22 14:22:37 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *cpy;
	char *original;

	cpy = (char*)dest;
	original = (char*)src;
	while (n-- > 0)
		*cpy++ = *original++;
	return (dest);
}
