/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <nlory-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 20:12:09 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/05/15 21:10:38 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static double		ft_decimal(const char *str, float *i)
{
	double		digit;
	double		value;

	value = 0;
	++str;
	*i = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		digit = (double)(*str - '0');
		value = (value * 10) + digit;
		str++;
		(*i)++;
	}
	return (value);
}

static char			ft_sign(const char **str)
{
	char		sign;

	sign = 1;
	if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
	return (sign);
}

double				ft_atof(const char *str)
{
	double		value;
	double		digit;
	char		sign;
	float		i;

	value = 0;
	while (*str != '.' && *str != '\0'
			&& (*str == ' ' || *str == '\t' || *str == '\v'
				|| *str == '\r' || *str == '\f' || *str == '\n'))
		str++;
	sign = ft_sign(&str);
	while (*str != '.' && *str != '\0' && (*str >= '0' && *str <= '9'))
	{
		digit = (double)(*str - '0');
		value = (value * 10) + digit;
		str++;
	}
	if (*str == '.')
		value = value + (ft_decimal(str, &i) / (ft_powf(10, i)));
	return (value * sign);
}
