/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 13:53:51 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/04/29 00:51:46 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*start;
	char	*end;
	char	*trim;

	if (!s)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s)
		s++;
	start = (char *)s;
	end = start + ft_strlen(start) - 1;
	while ((*end == ' ' || *end == '\n' || *end == '\t') && end >= start)
		end--;
	if ((end - start) >= 0)
	{
		trim = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!trim)
			return (NULL);
		ft_strncpy(trim, start, end - start + 1);
		trim[end - start + 1] = '\0';
	}
	else
		trim = ft_memalloc(1);
	return (trim);
}
