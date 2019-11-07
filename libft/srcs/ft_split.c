/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:07:41 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/07 19:19:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_ischarset(char const a, char c)
{
	if (a == c)
		return (1);
	else
		return (0);
}

int		ft_countword(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (ft_ischarset(s[i], c) == 1)
			i++;
		else
		{
			while (s[i] != '\0' && ft_ischarset(s[i], c) == 0)
				i++;
			word++;
		}
	}
	return (word);
}

char	*ftf_strncpy(char *dst, const char *src, int len)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < len)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	while (j < len)
	{
		dst[j] = '\0';
		j++;
	}
	return (dst);
}

void	ft_splity(char const *s, char c, char **split)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (ft_ischarset(s[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (s[i] != '\0' && ft_ischarset(s[i + j], c) == 0)
				j++;
			if (!(split[k] = (char*)malloc(sizeof(char) * j + 1)))
				return ;
			split[k] = ftf_strncpy(split[k], s + i, j);
			k++;
			i = i + j;
		}
	}
	split[k] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		lentab;

	if (s == NULL)
		return (NULL);
	lentab = ft_countword(s, c);
	if (!(split = (char **)malloc(sizeof(char*) * (lentab + 1))))
		return (NULL);
	ft_splity(s, c, split);
	return (split);
}
