/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:17:15 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/06 20:10:55 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_checkdec(int n)
{
	int i;

	i = 1;
	if (n < 0)
		i++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		k;

	k = ft_checkdec(n);
	if (!(itoa = malloc(sizeof(char) * k + 1)))
		return (NULL);
	if (n == -2147483648)
	{
		itoa[1] = '2';
		n = -147483648;
	}
	if (n < 0)
	{
		n = n * -1;
		itoa[0] = '-';
	}
	itoa[k] = '\0';
	k--;
	if (n == 0)
		itoa[k] = '0';
	while (n != 0)
	{
		itoa[k] = '0' + (n % 10);
		n = n / 10;
		k--;
	}
	return (itoa);
}
