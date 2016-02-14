/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 19:57:55 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/05/15 21:10:51 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float			ft_powf(float nbr, float power)
{
	float		i;
	float		result;

	i = 1;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nbr);
	else if (power > 1)
	{
		result = nbr;
		while (i < power)
		{
			result = result * nbr;
			i++;
		}
		return (result);
	}
	else
		return (0);
}
