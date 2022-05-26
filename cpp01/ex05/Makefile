# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 13:52:35 by wiozsert          #+#    #+#              #
#    Updated: 2022/05/26 13:52:58 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRCS = main.cpp Harl.cpp

OBJ = main.o Harl.o

$(NAME) : all

all :
	mkdir -p obj
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -c
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)
	mv $(OBJ) ./obj

clean :
	rm -rf obj

fclean : clean
	rm -rf $(NAME)

re : fclean all