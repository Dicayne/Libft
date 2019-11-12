/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:08:43 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/12 17:49:08 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *loc;

	loc = NULL;
	loc = malloc(size * count);
	if (loc != NULL)
	{
		if (count != 0 && size != 0)
			ft_bzero(loc, count * size);
	}
	return (loc);
}
