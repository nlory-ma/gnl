/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <nlory-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 21:13:57 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/27 13:10:41 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8
# include <sys/uio.h>
# include <sys/types.h>
# include "libft.h"

int						get_next_line(int const fd, char **line);

typedef struct			s_read
{
	int					size;
	int					index;
	int					fd;
	char				*read;
	struct s_read		*next;
}						t_read;

#endif
