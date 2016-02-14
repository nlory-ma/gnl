/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 21:30:55 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:37:40 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_reverse(char *s)
{
	char	*s1;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_memalloc(len);
	if (s1 == NULL)
		return ;
	while (--len >= 0)
	{
		s1[i] = s[len];
		i++;
	}
	s1[i] = '\0';
	ft_strcpy(s, s1);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		j;

	j = 0;
	i = ft_nbrlen(n);
	s = ft_memalloc(i + 1);
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		s[j] = '-';
		j++;
	}
	while (j < i)
	{
		s[j] = n % 10 + 48;
		n = n / 10;
		j++;
	}
	s[j] = '\0';
	ft_reverse(s);
	return (s);
}
