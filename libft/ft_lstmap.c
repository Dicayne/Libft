/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:12:50 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/11 16:14:58 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lt, void *(*f)(void *), void (*dl)(void *))
{
	t_list		*first;
	t_list		*map;

	if (!lt)
		return (0);
	if (!(map = ft_lstnew(f(lt->content))))
		return (0);
	first = map;
	while (lt)
	{
		if (lt->next)
		{
			if (!(map->next = ft_lstnew((*f)(lt->next->content))))
			{
				ft_lstclear(&first, dl);
				return (0);
			}
			map = map->next;
		}
		lt = lt->next;
	}
	map->next = 0;
	return (first);
}
