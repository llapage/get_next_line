/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:49:45 by llapage           #+#    #+#             */
/*   Updated: 2018/10/22 15:29:00 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)haystack;
	i = 0;
	if (needle[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			j++;
			if (j == ft_strlen(needle))
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
