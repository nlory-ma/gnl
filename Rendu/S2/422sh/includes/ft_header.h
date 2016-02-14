/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 23:54:56 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/05/29 16:08:43 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include "ft_tools.h"

void		ft_env(void);
void		ft_exit(void);
void		ft_put_prompt(void);
void		ft_free_array(char ***args);
char		*ft_extract_env(char **env, char *str_extract);

#endif
