/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:12:50 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/12 21:14:49 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*fft_lstmap(t_list *lt, void *(*f)(void *), void (*dl)(void *))
{
	t_list		*first;
	t_list		*map;

	if (lt == NULL || f == NULL)
		return (NULL);
	if (!(map = ft_lstnew(f(lt->content))))
		return (NULL);
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

#include "libft.h"
t_list		*ft_lstmap(t_list *lst, void *(f)(void *), void (del)(void ))
{
	t_list		*elem;
	t_list *		new_lst;

	new_lst = NULL;
	while (lst != NULL && f != NULL)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == NULL)
			{
			ft_lstclear(&new_lst, del);
			break;
			}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}