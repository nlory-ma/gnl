/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 20:24:03 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:33:16 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	char		*s1;
	int			i;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_memalloc(len);
	if ((s1 == NULL) || (s == NULL) || (f == NULL))
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
