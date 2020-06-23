# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasima <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 16:12:57 by mmasima           #+#    #+#              #
#    Updated: 2019/06/20 14:52:31 by mmasima          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
FILES	= ft_isalnum.c\
	   	ft_isprint.c\
	   	ft_memchr.c\
	   	ft_memmove.c\
	   	ft_putendl.c\
		ft_putstr.c\
	   	ft_strclr.c\
	   	ft_strdup.c\
	   	ft_strjoin.c\
	   	ft_strmapi.c\
		ft_strnequ.c\
	   	ft_strstr.c\
	   	ft_toupper.c\
	   	ft_isalpha.c\
	   	ft_itoa.c\
		ft_memcmp.c\
	   	ft_memset.c\
	   	ft_putendl_fd.c\
	   	ft_putstr_fd.c\
	   	ft_strcmp.c\
		ft_strequ.c\
	   	ft_strlcat.c\
	   	ft_strncat.c\
		ft_strnew.c\
	   	ft_strsub.c\
		ft_atoi.c\
	   	ft_isascii.c\
		ft_memalloc.c\
	   	ft_memcpy.c\
		ft_putchar.c\
		ft_putnbr.c\
	   	ft_strcat.c\
	   	ft_strcpy.c\
	   	ft_striter.c\
	   	ft_strlen.c\
		ft_strncmp.c\
	   	ft_strnstr.c\
	   	ft_strtrim.c\
		ft_bzero.c\
	   	ft_isdigit.c\
	   	ft_memccpy.c\
	   	ft_memdel.c\
	   	ft_putchar_fd.c\
		ft_putnbr_fd.c\
	   	ft_strchr.c\
	   	ft_strdel.c\
	   	ft_striteri.c\
	   	ft_strmap.c\
		ft_strncpy.c\
	   	ft_strrchr.c\
	   	ft_tolower.c\
	   	ft_strsplit.c\
		ft_strsplitall.c\
		ft_cnt_all_words.c\
		ft_realloc.c\
		ft_strjoinch.c\
		ft_strjoincl.c\
		ft_strjoinchf.c\
		ft_pathjoin.c\
		get_next_line.c\
		ft_putnstr.c\

OBJECT = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rc $(NAME) $(OBJECT)

$(OBJECT): $(FILES)
	$(CC) $(CFLAGS) $(FILES)


clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME) 

re:	fclean all

.PHONY: clean fclean all re

