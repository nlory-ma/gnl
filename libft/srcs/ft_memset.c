/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 13:51:57 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 01:00:22 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	s;

	p = (unsigned char *)b;
	s = (unsigned char)c;
	while (len)
	{
		*p++ = s;
		len--;
	}
	return (b);
}
