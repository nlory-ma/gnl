/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 20:19:37 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 00:58:07 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int					i;
	unsigned char		*p1;
	unsigned const char *p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned const char *)s2;
	while (n)
	{
		p1[i] = p2[i];
		i++;
		n--;
	}
	return (s1);
}
