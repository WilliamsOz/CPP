# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 16:22:52 by wiozsert          #+#    #+#              #
#    Updated: 2022/09/23 11:52:26 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o

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