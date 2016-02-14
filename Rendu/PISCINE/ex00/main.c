/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchevald <pchevald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 22:00:29 by pchevald          #+#    #+#             */
/*   Updated: 2014/07/20 20:05:41 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 50
#define TAB_LENGTH 1000

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

char	**table_fill(char **tab, int i, int j, int k)
{
	char	buf[BUF_SIZE + 1];
	int		ret;

	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		while (buf[i] != '\0')
		{
			if (buf[i] == '\n')
			{
				tab[k][j] = '\0';
				j = -1;
				k++;
			}
			else
				tab[k][j] = buf[i];
			j++;
			i++;
		}
		i = 0;
	}
	return (tab);
}

char	**table_create(char **tab)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * TAB_LENGTH);
	while (i < TAB_LENGTH)
	{
		tab[i] = (char *)malloc(sizeof(char) * TAB_LENGTH);
		i++;
	}
	i = 0;
	return (table_fill(tab, i, j, k));
}

void	table_size(char **tab, int *line, int *col)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[0][i])
		i++;;
	while (tab[j][0])
		j++;
	*line = j;
	*col = i;
}

int		main(void)
{
	char	**tab;
	int		line;
	int		col;

	tab = 0;
	tab = table_create(tab);
	table_size(tab, &line, &col);
	if (tab[0][0] == 'o')
		printf("[colle-00]");
	else if (tab[0][0] == '/')
		printf("[colle-01]");
	else
	{
		// Ne marche pas ... et c'est le bordel
		if (tab[0][col] == 'A')
			printf("[colle-02]");
		if (tab[line][0] == 'A' )
			printf("[colle-03]");
		else
			printf("[colle-04]");
	}		
	printf(" [%d] [%d]", line, col);
	return (0);
}
