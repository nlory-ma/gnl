/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 20:39:40 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:27:46 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*ss1;
	const char		*ss2;

	ss1 = s1;
	ss2 = s2;
	while (n--)
	{
		*ss1 = *ss2;
		if (*ss2 == (unsigned char)c)
			return (ss1);
		ss1++;
		ss2++;
	}
	return (NULL);
}
