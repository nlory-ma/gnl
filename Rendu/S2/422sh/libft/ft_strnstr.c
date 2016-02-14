/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 17:14:43 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:35:47 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (s2 == NULL)
		return ((char *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
