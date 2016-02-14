/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 20:19:37 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:23:36 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	while (n--)
		*(unsigned char *)s1++ = *(unsigned const char *)s2++;
	return (s1);
}
