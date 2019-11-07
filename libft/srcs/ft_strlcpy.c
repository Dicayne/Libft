/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:25:27 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/06 09:31:21 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t size;

	size = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (src[size] != '\0')
		size++;
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (size);
}
