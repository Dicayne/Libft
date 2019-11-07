# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 15:18:39 by vmoreau           #+#    #+#              #
#    Updated: 2019/11/07 20:15:01 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	srcs/ft_atoi.c			srcs/ft_isalnum.c	srcs/ft_isalpha.c	\
		srcs/ft_isascii.c		srcs/ft_isdigit.c	srcs/ft_isprint.c	\
		srcs/ft_strchr.c		srcs/ft_strlcpy.c	srcs/ft_strlen.c	\
		srcs/ft_strncmp.c		srcs/ft_strrchr.c	srcs/ft_tolower.c	\
		srcs/ft_toupper.c		srcs/ft_strlcat.c	srcs/ft_strnstr.c	\
		srcs/ft_memset.c		srcs/ft_bzero.c		srcs/ft_memcpy.c	\
		srcs/ft_memccpy.c		srcs/ft_memcmp.c	srcs/ft_memchr.c	\
		srcs/ft_memmove.c		srcs/ft_strdup.c	srcs/ft_calloc.c	\
		srcs/ft_substr.c		srcs/ft_strjoin.c	srcs/ft_itoa.c		\
		srcs/ft_strmapi.c		srcs/ft_split.c		srcs/ft_strtrim.c	\
		srcs/ft_putchar_fd.c	srcs/ft_putstr_fd.c	srcs/ft_putendl_fd.c\
		srcs/ft_putnbr_fd.c	


CFLAGS = -Wall -Wextra -Werror

INCL = srcs/ft.h

OBJ = ${SRCS:.c=.o}

LIBCREA = ar rc

.c.o :
	gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCL}
	
$(NAME) : ${OBJ}
	${LIBCREA} ${NAME} ${OBJ}

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o