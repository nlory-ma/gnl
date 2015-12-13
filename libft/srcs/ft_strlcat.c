/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 17:34:47 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 00:59:22 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	j = size - ft_strlen(dst) - 1;
	while (*dst)
	{
		dst++;
		i++;
	}
	while (*src && j > 0)
	{
		*dst++ = *src++;
		i++;
		j--;
	}
	*dst = '\0';
	dst = dst - i;
	return (k);
}
