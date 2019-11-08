/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:44:12 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/08 10:42:03 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_checkneedle(char *haystack, const char *needle, size_t a, size_t b)
{
	int i;
	int bool;

	i = 0;
	bool = 1;
	while (needle[i] != '\0' && b + i <= a)
	{
		if (haystack[i] != needle[i])
		{
			bool = 0;
			break ;
		}
		i++;
	}
	if (needle[i] != '\0')
		bool = 0;
	return (bool);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i <= len - 1)
	{
		if (haystack[i] == needle[0]
			&& ft_checkneedle((char*)haystack + i, needle, len, i) == 1)
			return ((char*)haystack + i);
		i++;
	}
	if (needle[0] == '\0')
		return ((char*)haystack);
	return (NULL);
}
