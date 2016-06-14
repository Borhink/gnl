/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhonore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 17:00:38 by qhonore           #+#    #+#             */
/*   Updated: 2016/01/13 18:07:54 by qhonore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 19

# include "libft.h"
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_file
{
	int				fd;
	char			*str;
	struct s_file	*next;
	struct s_file	*back;
}				t_file;

int				get_next_line(int const fd, char **line);

#endif
