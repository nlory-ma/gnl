/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 17:31:25 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:28:22 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t			ft_strlen(char const *s)
{
	size_t			i;

	i = 0;
	if (s == NULL)
		return (0);
	while (*s++)
		i++;
	return (i);
}
