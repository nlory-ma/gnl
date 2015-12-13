/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 16:14:30 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:30:42 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s2 == '\0')
			return (1);
		if (*(unsigned char *)s2 > *(unsigned char *)s1)
			return (*s1 - *s2);
		if (*(unsigned char *)s2 < *(unsigned char *)s1)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s2)
		return (-1);
	return (0);
}
