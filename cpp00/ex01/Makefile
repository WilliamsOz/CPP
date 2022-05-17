# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 09:29:45 by oozsertt          #+#    #+#              #
#    Updated: 2022/05/17 10:51:31 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp PhoneBook.class.cpp Contact.class.cpp

OBJ = main.o PhoneBook.class.o Contact.class.o

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