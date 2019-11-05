# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 15:18:39 by vmoreau           #+#    #+#              #
#    Updated: 2019/11/05 19:43:38 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcpy.c \
		ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
		ft_toupper.c ft_strlcat.c ft_strnstr.c ft_memset.c

CFLAGS = -Wall -Wextra -Werror

INCL = ft.h

OBJ = ${SRCS:.c=.o}

LIBCREA = ar rc

.c.o :
	gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCL}
	
${NAME} : ${OBJ}
	${LIBCREA} ${NAME} ${OBJ}

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o