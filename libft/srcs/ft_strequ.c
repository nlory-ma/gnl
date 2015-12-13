/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 20:34:24 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:31:24 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	else if (s1 == NULL && s2 != NULL)
		return (0);
	else if (s1 != NULL && s2 == NULL)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
