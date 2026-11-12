# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/30 10:53:41 by mhinojos          #+#    #+#              #
#    Updated: 2026/11/12 02:07:30 by mhinojos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c operation1.c operation2.c operation3.c \
		simple.c utils.c medium.c disorder.c config.c \
		adaptive.c complex.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	@cc $(FLAGS) -c $< -o $@

all: $(NAME)

libft/libft.a: $(wildcard libft/*.c) libft/libft.h
	$(MAKE) -C libft

$(NAME): $(OBJS) libft/libft.a
	cc $(FLAGS) $(OBJS) libft/libft.a -o $(NAME)

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all clean fclean re
