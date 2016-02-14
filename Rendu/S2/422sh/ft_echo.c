/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/24 04:17:05 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/06/04 10:19:33 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "ft_header.h"

void			ft_echo(char *args)
{
	extern char	**environ;
	char		**tab_args;
	char		c;
	int			i;

	i = 0;
	//if (search_caracter(args, '$') , return le nbr de $ contenu dans args, si $ == 1 alors)
	//{
		if (c == '\t' || c == ' ' || c == '\b' || c == '\v')
			tab_args = ft_strsplit(args, c);
		while (environ[i])
		{
			if (tab_args[1][0] == '$' && (ft_strequ((tab_args[1] + 1) , environ[i])))
				ft_putstr(ft_extract_env(environ, environ[i]));
			/*else if (tab_args[1][0] == '$')
			{
				ft_execute_commande(args);
				break ;
			}*/
			i++;
		}
	//}
	//	else if (nbr == 0)
	//	ft_putendl(args);
	//	else if (nbr > 1)
	//	ft_execute_commande(args);
}
