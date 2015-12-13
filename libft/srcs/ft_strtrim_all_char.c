/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_all_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 07:47:32 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 00:51:29 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			*ft_strtrim_all_char(char *s, char c)
{
	int			i;
	int			j;
	char		*s2;

	j = 0;
	i = 0;
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
			s2[j++] = s[i++];
		else if (s[i] == c && s[i + 1] != c)
		{
			s2[j] = c;
			j++;
			i++;
		}
		j++;
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
