/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:00:23 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/12 17:28:30 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && i < n)
		{
			if (s1[i] != s2[i])
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			i++;
		}
		if (s1[i] == '\0' && s2[i] != '\0')
			return (-1);
		if (s1[0] == '\0')
			return ((unsigned char)s1[0] - (unsigned char)s2[0]);
	}
	return (0);
}
