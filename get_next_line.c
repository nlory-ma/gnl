/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <nlory-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 10:56:50 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/03/26 18:05:58 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "get_next_line.h"



static char				*ft_newline(const char *src_buf, int *index)
{
	while (*index < BUFF_SIZE)
	{
		if (src_buf[*index] == '\n')
			return ((char *)&src_buf[*index + 1]);
		*index = *index + 1;
	}
	return (NULL);
}



static char				ft_join_eol(char *buf, char **res_line, char **buf_tmp)
{
	int					i;
	char				*next;

	i = 0;
	next = ft_newline(buf, &i);
//	next = ft_strchr(buf, '\n');
	*buf_tmp = ft_strnew(BUFF_SIZE + 1);
	if (next == NULL)
	{
		*res_line = ft_strjoin(*res_line, buf);
		*buf_tmp[0] = '\0'; // avanr *buf_tmp[0] = '0';
		return ('\0');   // return ('0');
	}
	else
	{
		*res_line = ft_strjoin(*res_line, ft_strsub(buf, 0, i));
		*buf_tmp = next;
		return ('1');
	}
}

static size_t			ft_read_buf(char *buf, int fd)
{
	size_t				ret;
	
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	return (ret);
}

int						get_next_line(const int fd, char **line)
{
	static char			*buf;
	size_t				ret;
	char				end;
	char				*buf_tmp;
	
	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (buf == NULL)
		buf = ft_strnew(BUFF_SIZE + 1);
	//line = ft_strnew(BUFF_SIZE + 1);
	*line = NULL;
	end = '\0'; // end = '0';
	ret = 1;
	while (ret > 0 && end == '\0')   // end == '\0';
 	{
		if (buf[0] == '\0')
			ret = ft_read_buf(buf, fd);
			//buf[ret] = '\0';
		end = ft_join_eol(buf, line, &buf_tmp);
		//printf("buf_tmp = %s et buf = %s\n", buf_tmp, buf);
		ft_memcpy(buf, buf_tmp, BUFF_SIZE);
		//ft_strncpy(buf_tmp, buf, BUFF_SIZE);
		//ft_memcpy(buf_tmp, buf, BUFF_SIZE);
		//printf("apre memcpy buf_tmp = %s et buf = %s\n", buf_tmp, buf);

		//line = ft_strnew(BUFF_SIZE + 1);

		//free(buf_tmp);
		//ft_strdel(&buf_tmp);
	}
	//free(line);
	//ft_strdel(line);
	if (ret > 0 || *line[0] != '\0')
		return (1);
	if (ret == 0)
		ft_strdel(&buf);
	return (ret);
}

int			main(int argc, char **argv)
{
	char 	*line;
	int		fd;
	//int 	i;

	(void)argc;
	
	fd = open(argv[1], O_RDONLY);
	//i = 0;

	while (get_next_line(fd, &line) >= 0)
		printf("%s\n", line);
	return (0);

//(void)argv;
/*(void)argc;

	  int fd;
	  int ret;
  char  buffer[BUFF_SIZE] = {0};

 fd = open(argv[1], O_RDONLY);
  while ((ret = ft_read_buf(fd, buffer)))
    {
      printf("%d\n", ret);
    }
  return (0);*/
}
