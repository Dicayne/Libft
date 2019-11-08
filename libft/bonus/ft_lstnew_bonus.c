/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:29:56 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/08 20:48:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *new;

	if(!(new = malloc(sizeof(t_list))))
		return (NULL);
	if(content == NULL)
		new->content = NULL;
	else
		new->content = content;
	return (new);
}