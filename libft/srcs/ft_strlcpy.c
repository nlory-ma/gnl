/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 02:17:00 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 00:59:02 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != 0 && size > 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (src[i] == '\0' && size > 0)
	{
		while (size > 0)
		{
			dst[i++] = '\0';
			size--;
		}
	}
	while (dst[j] != '\0')
		j++;
	return (j - 1);
}
