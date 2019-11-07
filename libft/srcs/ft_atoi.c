/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:19:56 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/07 11:06:49 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(const char *str)
{
	int i;
	int less;
	int atoi;

	i = 0;
	less = 0;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			less = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	if (less == 1)
		atoi = atoi * -1;
	return (atoi);
}
