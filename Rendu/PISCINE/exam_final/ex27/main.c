/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/25 02:03:18 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/07/25 02:03:19 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFF_SIZE 1024

typedef struct 		s_list
{
	char			*s;
	struct s_list	*next;
}					t_list;

typedef struct 		s_map
{
	t_list			*list;
	int				nbr_col;
	int				nbr_line;	
}					t_map;

int				ft_strlen(char *s)
{
	int			i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void			ft_putendl(char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

void			ft_error(void)
{
	write(1, "\n", 1);
	return ;
}

void			free_str(char *s)
{
	while (*s)
	{
		*s = '\0';
		s++;
	}
	s = NULL;
}

t_list			*create_node(char *s)
{
	t_list		*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->s = s;
	node->next = NULL;
	return (node);
}

t_list			*ft_create_list(char *s, t_list *list)
{
	t_list		*tmp;
	t_list		*node;

	node = create_node(s);
	tmp = list;
	if (list == NULL)
		return (node);
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}
	return (list);
}

char			*ft_strdup(char *s)
{
	int			i;
	int			len;
	char		*s1;

	i = 0;
	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (s1 == NULL || s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

void			ft_print_list(t_list *list)
{
	t_list		*tmp;

	tmp = list;
	while (tmp->next != NULL)
	{
		write(1, tmp->s, ft_strlen(tmp->s));
		write(1, "\n", 1);
		tmp = tmp->next;
	}
}

void			find_island(t_map *map)
{
	int			i;
	int			j;
	//int			**tab;

	i = 0;
	j = 0;
	while (map->list->s[i] != '\0')
	{
		if (map->list->s[i] == '\n')
			j++;
		i++;
	}
	printf("%d\n", i);
}
void			ft_get_line(char *s, t_map *map)
{
	int			fd;
	int			ret;
	char		*s_dup;;
	char 		buf[BUFF_SIZE];

	fd = open(s, O_RDONLY);
	if (fd == -1)
		ft_error();
	ret = 0;
	map->list = NULL;
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		s_dup = ft_strdup(buf);
		map->list = ft_create_list(s_dup, map->list);
		free_str(buf);
	}
	find_island(map);
	ft_putendl(map->list->s);
}

int				main(int ac, char **av)
{
	t_map		map;

	if (ac != 2)
		ft_error();
	else
	{
		ft_get_line(av[1], &map);
		ft_print_list(map.list);
	}
	return (0);
}