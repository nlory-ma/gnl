/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 19:42:35 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:30:57 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_strdel(char **as)
{
	if (as != NULL)
	{
		if (*as != NULL)
		{
			free(*as);
			*as = NULL;
		}
	}
}