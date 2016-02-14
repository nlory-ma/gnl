/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 23:57:34 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/05/24 03:13:09 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../libft/includes/libft.h"

char		*ft_extract_env(char **env, char *str)
{
	int		i;
	size_t	len;
	char	*str_extract;

	i = 0;
	len = ft_strlen(str);
	while (env[i])
	{
		if (ft_strnstr(env[i], str, len))
			str_extract = ft_strchr(env[i], '=') + 1;
		i++;
	}
	if (str_extract == NULL)
		return (NULL);
	return (str_extract);
}
