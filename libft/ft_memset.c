/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:05:40 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/05 19:45:21 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memset (void *s, int c, size_t n)
{
	size_t i;
	size_t len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len && i <= n - 1)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i ++;
	}
	return (s);
}

int main ()
{
	char str[50] = "This is string.h library function";
	char str2[50] = "This is string.h library function";
	printf("%s\n\n", str2);
	memset(str2,'$',7);
	ft_memset(str,'$',7);
	printf("%s\n",str);
	printf("%s\n",str2);
	return(0);
}