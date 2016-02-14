/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <nlory-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 20:51:12 by nlory-ma          #+#    #+#             */
/*   Updated: 2014/04/16 16:40:01 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(*lst));
	if (new == NULL)
		return (NULL);
	new = lst;
	while (new->next == NULL)
	{
		new = f(lst);
		new->next = lst;
	}
	return (new);
}
