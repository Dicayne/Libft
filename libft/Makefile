# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 15:18:39 by vmoreau           #+#    #+#              #
#    Updated: 2019/11/08 20:54:11 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c			ft_isalnum.c	ft_isalpha.c	\
		ft_isascii.c		ft_isdigit.c	ft_isprint.c	\
		ft_strchr.c			ft_strlcpy.c	ft_strlen.c		\
		ft_strncmp.c		ft_strrchr.c	ft_tolower.c	\
		ft_toupper.c		ft_strlcat.c	ft_strnstr.c	\
		ft_memset.c			ft_bzero.c		ft_memcpy.c		\
		ft_memccpy.c		ft_memcmp.c		ft_memchr.c		\
		ft_memmove.c		ft_strdup.c		ft_calloc.c		\
		ft_substr.c			ft_strjoin.c	ft_itoa.c		\
		ft_strmapi.c		ft_split.c		ft_strtrim.c	\
		ft_putchar_fd.c		ft_putstr_fd.c	ft_putendl_fd.c	\
		ft_putnbr_fd.c

SRCSBO =	bonus/ft_lstadd_front_bonus.c		bonus/ft_lstlast_bonus.c	\
			bonus/ft_lstadd_back-bonus.c		bonus/ft_lstsize_bonus.c	\
			bonus/ft_lstnew_bonus.c			

CFLAGS = -Wall -Wextra -Werror

INCL = libft.h

OBJ = $(SRCS:.c=.o)

OBJBO = $(SRCSBO:.c=.o)

LIBCREA = ar rc

.c.o :
	gcc $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCL)
	
$(NAME) : $(OBJ)
	$(LIBCREA) $(NAME) $(OBJ)

all : $(NAME)

bonus : $(OBJ) $(OBJBO)
	$(LIBCREA) $(NAME) $(OBJ) $(OBJBO)

clean :
	rm -rf $(OBJ) $(OBJBO)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re .c.o