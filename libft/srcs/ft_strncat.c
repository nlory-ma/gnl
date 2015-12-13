/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 14:04:20 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:29:16 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = 0;
	while (n && (s2[j] != '\0'))
	{
		s1[i] = s2[j];
		n--;
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}