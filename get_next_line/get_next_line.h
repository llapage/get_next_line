/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:08:39 by llapage           #+#    #+#             */
/*   Updated: 2018/11/09 12:01:29 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <limits.h>
# include "libft/libft.h"

# define BUFF_SIZE 3000000

int		get_next_line(const int fd, char **line);

#endif
