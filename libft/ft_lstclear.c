/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:11:52 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/11 14:22:07 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr;

	ptr = *lst;
	while (ptr != NULL)
	{
		del(ptr->content);
		free(ptr);
		ptr = ptr->next;
	}
	*lst = NULL;
}
