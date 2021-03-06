# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 22:10:22 by itkimura          #+#    #+#              #
#    Updated: 2021/11/17 16:33:41 by itkimura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror
SRCS = *.c ./Part_1/*.c ./Part_2/*.c
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
