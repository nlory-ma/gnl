/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 20:09:14 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:33:00 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_memalloc(len);
	if ((s1 == NULL) || (s == NULL) || (f == NULL))
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = f(s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
