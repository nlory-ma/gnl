/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 18:24:53 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/25 17:59:23 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char				*ft_strnew(size_t size)
{
	char			*s;

	s = (char *)malloc((size + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);
	while (size > 0)
	{
		s[size] = '\0';
		size--;
	}
	s[size] = '\0';
	return (s);
}
