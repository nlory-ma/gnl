/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prompt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 23:18:40 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/06/04 10:41:07 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

static void			ft_put_pwd(char **environ)
{
	int				i;
	char			*pwd;
	char			*home;

	i = 0;
	pwd = ft_extract_env(environ, "PWD");
	home = ft_extract_env(environ, "HOME");
	if (pwd == NULL || home == NULL)
		ft_putstr(">");
	else
	{
		i = ft_strlen(home);
		if (ft_strnstr(pwd, home, i))
		{
			ft_putstr("[~");
			ft_putstr(&pwd[i]);
			ft_putstr("]");
		}
		else
			ft_putstr(pwd);
		ft_putstr("~>\033[0m");
	}
}

static void			ft_put_username(char **environ)
{
	char			*u_name;

	u_name = ft_extract_env(environ, "USER");
	ft_putstr("\033[36;3m[");
	ft_putstr(u_name);
	ft_putstr("]");
}


void				ft_put_prompt(void)
{
	extern char		**environ;

	if (environ)
	{
		ft_put_username(environ);
		ft_put_pwd(environ);
	}
}
