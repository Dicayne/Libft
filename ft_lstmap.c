/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:12:50 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/13 13:36:03 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*first;
	t_list		*map;

	if (lst == NULL)
		return (NULL);
	if (!(map = ft_lstnew(f(lst->content))))
		return (NULL);
	first = map;
	while (lst)
	{
		if (lst->next)
		{
			if (!(map->next = ft_lstnew((*f)(lst->next->content))))
			{
				ft_lstclear(&first, del);
				return (0);
			}
			map = map->next;
		}
		lst = lst->next;
	}
	map->next = 0;
	return (first);
}
