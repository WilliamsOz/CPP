# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 19:49:48 by wiozsert          #+#    #+#              #
#    Updated: 2022/10/04 10:44:21 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRCS = main.cpp Convert.cpp Errors.cpp Print.cpp

OBJ = main.o Convert.o Errors.o Print.o

all : $(NAME)

$(NAME) : $(SRCS)
	mkdir -p obj
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -c
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)
	mv $(OBJ) ./obj

clean :
	rm -rf obj

fclean : clean
	rm -rf $(NAME)

re : fclean all