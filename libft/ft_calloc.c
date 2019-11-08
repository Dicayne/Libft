/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:08:43 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/08 10:42:25 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *loc;

	if (!(loc = malloc(size * count)))
		return (NULL);
	if (count == 0 || size == 0)
		return (loc);
	ft_bzero(loc, count * size);
	return (loc);
}
