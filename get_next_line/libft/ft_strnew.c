/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:48:15 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 17:00:09 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	mem = (char*)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, (int)'\0', size + 1);
	return (mem);
}
