/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:13:36 by llapage           #+#    #+#             */
/*   Updated: 2018/10/22 18:24:09 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		ft_lstcount(t_list *head)
{
	t_list	*current;
	int		count;

	count = 0;
	current = head;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
