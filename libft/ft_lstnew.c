/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:29:56 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/11 16:36:35 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = malloc(sizeof(content) + sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		new->content = NULL;
	else
		new->content = content;
	new->next = NULL;
	return (new);
}
