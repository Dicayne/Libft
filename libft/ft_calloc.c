/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:08:43 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/06 16:48:38 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *loc;

	if (!(loc = malloc(size * count)))
		return (NULL);
	if (count == 0 || size == 0)
		return (loc);
	ft_bzero(loc, count);
	return (loc);
}
