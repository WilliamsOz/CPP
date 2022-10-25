# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:10:24 by wiozsert          #+#    #+#              #
#    Updated: 2022/10/25 14:49:38 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

OBJ = $(SRCS:.cpp=.o)

DEP = $(OBJ:%.o=%.d)

all : $(NAME)

.cpp.o:
	c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

-include $(DEP)

clean :
	rm -rf $(OBJ) $(DEP)

fclean : clean
	rm -rf $(NAME)

re : fclean all