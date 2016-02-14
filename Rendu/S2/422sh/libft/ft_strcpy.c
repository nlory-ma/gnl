/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 17:56:25 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:29:35 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strcpy(char *s1, const char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (*s2)
		*s1++ = *s2++;
	return (s1);
}
