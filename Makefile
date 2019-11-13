# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 15:18:39 by vmoreau           #+#    #+#              #
#    Updated: 2019/11/13 15:28:05 by vmoreau          ###   ########.fr        #
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

SRCSBO =	ft_lstadd_front.c		ft_lstlast.c	\
			ft_lstadd_back.c		ft_lstsize.c	\
			ft_lstnew.c				ft_lstdelone.c	\
			ft_lstclear.c			ft_lstiter.c	\
			ft_lstmap.c

CFLAGS = -Wall -Wextra -Werror

CC = clang

INC = ./

HEADER = $(INC)libft.h

OBJ = $(SRCS:.c=.o)

OBJBO = $(SRCSBO:.c=.o)

all : $(NAME)

$(OBJ): %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(OBJBO): %.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	
$(NAME) : $(OBJ)
	ar rcs $@ $^

bonus : $(OBJBO) $(OBJ)
	ar rcs $(NAME) $^

clean :
	$(RM) $(OBJ) $(OBJBO)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
