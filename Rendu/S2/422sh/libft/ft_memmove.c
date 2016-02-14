/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 14:35:36 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:24:21 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*ss1;
	const char	*ss2;

	ss1 = s1;
	ss2 = s2;
	if (ss2 <= ss1)
	{
		ss1 = ss1 + (n - 1);
		ss2 = ss2 + (n - 1);
		while (n--)
			*ss1-- = *ss2--;
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
