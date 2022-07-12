/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:48:49 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 16:05:27 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len > 0 && str[len] != (char)c)
		len--;
	if (str[len] == (char)c)
		return ((char*)&str[len]);
	return (NULL);
}
