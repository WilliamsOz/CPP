# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 14:08:27 by wiozsert          #+#    #+#              #
#    Updated: 2022/10/10 13:13:06 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = main.o Zombie.o zombieHorde.o

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