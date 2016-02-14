/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/25 05:29:18 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/07/25 05:29:19 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
typedef struct 		s_list
{
	void 			*data;
	struct s_list 	*next;
}					t_list;

void 				ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif