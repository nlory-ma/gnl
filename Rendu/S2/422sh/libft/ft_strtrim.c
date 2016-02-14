/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 13:53:51 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:36:11 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			space_before(char const *s)
{
	size_t		i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

int			space_after(char const *s)
{
	size_t		i;
	int			len;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (0);
	len = len - 1;
	while (len >= 0 && (s[len] == '\t' || s[len] == '\n' || s[len] == ' '))
	{
		len--;
		i++;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char		*s1;
	int			len_before;
	int			len_after;
	int			length;

	len_before = space_before(s);
	len_after = space_after(s);
	if ((len_before == 0) || (len_after == 0))
		return (ft_strdup(s));
	else
	{
		length = ft_strlen(s) - (len_after + len_before);
		s1 = ft_memalloc(length);
		if (s1 == NULL)
			return (NULL);
		s1 = ft_strsub(s, len_before, length);
	}
	return (s1);
}
