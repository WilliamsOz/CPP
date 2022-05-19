/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:52:49 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/19 16:17:08 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::addUser(std::string input, int index)
{
	input.clear();
	while (input.empty())
	{
		std::cout << std::endl << "\033[3;32mEnter a first name.\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	if (input.length() > 10)
	{
		input.resize(10);
		input[9] = '.';
	}
	_tab_user[index].assign(input);
	return ;
}

std::string	PhoneBook::getUser( int index ) const
{
	return (_tab_user[index]);
}

PhoneBook::PhoneBook(std::string p_add, std::string p_search, std::string p_exit)
	:	add(p_add),search(p_search), exit(p_exit)
{
	this->show_welcome_msg();
	return ;
}

PhoneBook::~PhoneBook( void )
{
	this->show_goodbye_msg();
	return ;
}
