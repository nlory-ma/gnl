/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 16:51:07 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:35:29 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (*s1)
	{
		if (*s2 == *s1)
		{
			if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
