/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:04:29 by llapage           #+#    #+#             */
/*   Updated: 2018/07/04 17:51:41 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s1);
	return (dup);
}
