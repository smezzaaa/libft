# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/12 13:49:15 by smeza-ro          #+#    #+#              #
#    Updated: 2025/12/16 18:25:57 by smeza-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rcs
HEADER = libft.h
SRCS = ft_isalpha.c ft_calloc.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(HEADER) $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o.: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re