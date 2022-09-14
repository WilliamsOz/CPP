/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:52:49 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 12:34:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::addUser(std::string input, int index)
{
	input.clear();
	std::cout << std::endl << "\033[3;32mEnter a first name :\033[0m" << std::endl;
	while (input.empty())
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty())
		{
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
			std::cout << std::endl << "\033[3;32mEnter a first name :\033[0m" << std::endl;
		}
	}
	if (std::cin.eof())
		return ;
	tab_user[index].assign(input);
	return ;
}

std::string	PhoneBook::getUser( int index ) const
{
	return (tab_user[index]);
}

PhoneBook::PhoneBook(std::string p_add, std::string p_search, std::string p_exit) 
:	add(p_add),search(p_search), exit(p_exit)
{
	this->show_welcome_msg();
	return ;
}

PhoneBook::~PhoneBook( void )
{
	return ;
}

void	PhoneBook::resetUserCounter( void )
{
	_userCounter = 0;
	return ;
}

int	PhoneBook::getUserCounter( void )
{
	return _userCounter;
}

void	PhoneBook::addUserCounter( void )
{
	_userCounter += 1;
	return ;
}

int	PhoneBook::_userCounter = 0;