/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:50:46 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:22:55 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void					*ft_memalloc(size_t size)
{
	char				*s;
	unsigned int		i;

	i = 0;
	s = (char *)malloc(sizeof((*s) * size));
	if (s == NULL)
		return (NULL);
	while (size > i)
		s[i++] = 0;
	return ((void *)s);
}
