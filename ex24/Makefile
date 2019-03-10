#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/26 20:10:02 by fsmith            #+#    #+#              #
#    Updated: 2018/11/26 20:33:55 by fsmith           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = srcs/ft_*.c

INCLUDE = includes

all: $(NAME)

$(NAME):
	gcc -c -I$(INCLUDE) $(SRC)
	ar rc $(NAME) ft_*.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
