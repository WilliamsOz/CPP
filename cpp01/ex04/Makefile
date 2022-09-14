# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 14:43:44 by wiozsert          #+#    #+#              #
#    Updated: 2022/09/14 12:34:05 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRCS = main.cpp Sed.cpp validArgument.cpp createNewFile.cpp

OBJ = main.o Sed.o validArgument.o createNewFile.o

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