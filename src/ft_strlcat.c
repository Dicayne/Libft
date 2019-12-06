/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:54:55 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/13 10:43:41 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;
	size_t j;

	len = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= i)
		len = len + dstsize;
	else
		len = len + i;
	if (dstsize > i)
	{
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len);
}
