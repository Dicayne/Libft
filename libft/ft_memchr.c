/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:59:25 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/08 10:41:54 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i <= n - 1)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
