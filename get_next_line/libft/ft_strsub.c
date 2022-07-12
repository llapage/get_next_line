/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:53:19 by llapage           #+#    #+#             */
/*   Updated: 2018/07/05 15:28:41 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		i;

	if (!s)
		return (NULL);
	new_str = ft_strnew(len);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (len-- > 0)
		new_str[i++] = s[start++];
	new_str[i] = '\0';
	return (new_str);
}
