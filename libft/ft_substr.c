/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:42:21 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/08 13:15:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(sub = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
	{
		sub[0] = '\0';
		return (sub);
	}
	while (s[start] != '\0' && i <= len - 1)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
