/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:07:41 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/12 14:37:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countword(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			word++;
		}
	}
	return (word);
}

static char		*ft_strncpy(char *dst, const char *src, int len)
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

static void	free_tab_str(char ***split, size_t index)
{
	size_t	i;

	i = 0;
	if (index != 0)
		index--;
	while (i < index)
	{
		free((*split)[i]);
		i++;
	}
	free(*split);
	*split = NULL;
}

static void	ft_splity(char const *s, char c, char ***split)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != '\0' && s[i + j] != c)
				j++;
			if (!((*split)[k] = (char*)malloc((sizeof(char) * (j + 1)))))
			{
				free_tab_str(split, k);
				break ;
			}
			(*split)[k] = ft_strncpy((*split)[k], s + i, j);
			k++;
			i = i + j;
		}
	}
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	size_t	lentab;

	split = NULL;
	if (s != NULL)
	{
		lentab = ft_countword(s, c);
		split = (char **)malloc(sizeof(char *) * (lentab + 1));
		if (split != NULL)
		{
			split[lentab] = NULL;
			ft_splity(s, c, &split);
		}
	}
	return (split);
}
