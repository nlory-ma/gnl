/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/24 02:49:43 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/05/24 03:17:04 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>

void			ft_free_array(char ***args)
{
	int			i;

	if (args)
	{
		if (*args)
		{
			i = 0;
			while ((*args)[i])
			{
				free((*args)[i]);
				(*args)[i] = NULL;
				i++;
			}
			free(*args);
			*args = NULL;
		}
	}
}


void			ft_exit(void)
{
	extern char	**environ;
	char		**argv;

	ft_free_array(&argv);
	ft_free_array(&environ);
	exit (0);
}
