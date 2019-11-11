/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:32:34 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/12 00:00:03 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ischarset(char const str, char const *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int		ft_trimy(char const *s1, char const *set, int i)
{
	int j;

	j = 0;
	while (s1[i] != '\0')
	{
		i++;
		j++;
	}
	i--;
	while (i >= 0 && ischarset(s1[i], set) == 1)
	{
		i--;
		j--;
	}
	return (j);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] != '\0' && ischarset(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
	{
		if (!(trim = malloc(sizeof(char))))
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	j = ft_trimy(s1, set, i);
	trim = ft_substr(s1, i, j);
	return (trim);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("coucou", "cou\0"));
// 	return (0);
// }
