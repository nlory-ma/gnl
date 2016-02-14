/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/24 03:41:33 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/05/24 03:47:32 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../libft/includes/libft.h"

void			ft_env(void)
{
	extern char	**environ;	
	int			i;

	i = 0;
	while (environ[i])
	{
		ft_putendl(environ[i]);
		i++;
	}
}
