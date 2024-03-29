/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 18:13:34 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:28:40 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (n > 0 && *s2 != '\0')
	{
		*s1++ = *s2++;
		n--;
	}
	while (n > 0)
	{
		*s1++ = '\0';
		n--;
	}
	return (s1);
}
