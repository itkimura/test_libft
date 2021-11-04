# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 22:10:22 by itkimura          #+#    #+#              #
#    Updated: 2021/11/01 10:39:17 by itkimura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror
SRCS = *.c
LIB = -L../libft -lft
NAME = test
HEADER = -I.

all: $(NAME)

$(NAME):
	$(CC) $(HEADER) $(SRCS) $(LIB) -o $(NAME)

clean:

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re