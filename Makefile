# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/30 10:53:41 by mhinojos          #+#    #+#              #
#    Updated: 2026/11/05 11:50:06 by mhinojos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = push_swap.c operation1.c operation2.c \
		operation3.c simple.c utils.c \
		medium.c disorder.c config.c \
		adaptative.c complex.c \


OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	@cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re