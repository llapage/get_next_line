/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:50:02 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 16:03:56 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char*)haystack;
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && str[i + j] != 0 && j + i < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
