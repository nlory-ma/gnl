/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/25 05:29:27 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/07/25 05:37:52 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void 					ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list				*tmp;

	tmp = begin_list;

	while (tmp->next != NULL)
	{
		(f)(tmp->data);
		tmp = tmp->next;
	}
}

void					ft_m(void *s)
{
	int		i;
	//(char *)s;

	i = 0;
	while(s[i])
	{
		s[i] = 'o';
		i++;
	}
	
}

int						main(void)
{
	t_list				*list;

	list = NULL;

	ft_list_foreach(list, &ft_m);
	return (0);
}