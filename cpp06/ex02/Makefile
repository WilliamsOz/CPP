# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:48:45 by wiozsert          #+#    #+#              #
#    Updated: 2022/10/12 14:20:44 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = random

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp SummonClass.cpp

OBJ = main.o Base.o A.o B.o C.o SummonClass.o

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