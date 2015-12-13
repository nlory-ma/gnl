/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 17:24:40 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 00:37:22 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_deplace_after(char const *s, int len)
{
	char		*s1;
	int			length;
	int			i;

	i = 0;
	length = ft_strlen(s) - len;
	s1 = ft_memalloc(length);
	if (s1 == NULL)
		return (NULL);
	while (i < length)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

static char		*ft_deplace_before(char const *s, int len)
{
	char		*s1;
	int			length;
	int			i;

	i = 0;
	length = ft_strlen(s) - len;
	s1 = ft_memalloc(length);
	if (s1 == NULL)
		return (NULL);
	while (i < length)
	{
		s1[i] = s[len];
		i++;
		len++;
	}
	s1[i] = '\0';
	return (s1);
}

static int		front_caracter(char const *s, char c)
{
	int			i;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	return (i);
}

static int		behind_caracter(char const *s, char c)
{
	int			i;
	int			len;

	i = 0;
	len = ft_strlen(s) - 1;
	while ((s[len] == c) && (len >= 0))
	{
		len--;
		i++;
	}
	return (i);
}

char			*ft_strtrim_char(char const *s, char c)
{
	char		*s1;
	int			len1;
	int			len2;

	len1 = front_caracter(s, c);
	len2 = behind_caracter(s, c);
	if ((len1 == 0) && (len2 == 0))
	{
		s1 = (char *)s;
		return (s1);
	}
	if ((len1 == (int)ft_strlen(s)) || (len2 == (int)ft_strlen(s)))
		return (NULL);
	else if ((len1 == 0) && (len2 != 0))
		return (ft_deplace_after(s, len2));
	else if ((len1 != 0) && (len2 == 0))
		return (ft_deplace_before(s, len1));
	else
	{
		s1 = ft_memalloc((ft_strlen(s) - (len1 + len2)));
		if (s1 == NULL)
			return (NULL);
		s1 = ft_strsub(s, len1, (ft_strlen(s) - (len1 + len2)));
	}
	return (s1);
}
