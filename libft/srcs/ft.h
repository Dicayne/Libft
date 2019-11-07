/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:13:09 by vmoreau           #+#    #+#             */
/*   Updated: 2019/11/07 20:14:26 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

/*
** PROTOTYPE
*/
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
#endif
