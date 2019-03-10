#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/26 21:14:18 by fsmith            #+#    #+#              #
#    Updated: 2018/11/26 21:14:20 by fsmith           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = *.c

INCLUDE = -I *.h

FLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(INCLUDE) $(SRC) $(FLAGS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all