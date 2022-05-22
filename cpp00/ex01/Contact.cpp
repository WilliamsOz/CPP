/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:03 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/22 12:46:35 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	Contact::printSummary( void ) const
{
	std::cout << std::setw(10);
	std::cout << "index" << "|";
	std::cout << std::setw(10);
	std::cout << "first name" << "|";
	std::cout << std::setw(10);
	std::cout << "last name" << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << std::endl;
}

void	Contact::showContact( void ) const
{
	int i = 0;

	printSummary();
	while (!(_tab_contact[i][0].empty()) && i < 8)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout <<std::setw(10);
		std::cout << _tab_contact[i][FIRST_NAME];
		std::cout << "|";
		std::cout <<std::setw(10);
		std::cout << _tab_contact[i][LAST_NAME];
		std::cout << "|";
		std::cout <<std::setw(10);
		std::cout << _tab_contact[i][NICKNAME];
		i++;
	}
	std::cout << std::endl;
	return ;
}

std::string	Contact::get_last_name(std::string dest)
{
	std::string	input;

	input.clear();
	while (input.empty())
	{
		std::cout << std::endl << "\033[3;32mEnter a last name :\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	if (input.length() > 10)
	{
		input.resize(10);
		input[9] = '.';
	}
	dest.assign(input);
	return (dest);
}

std::string	Contact::get_nickname(std::string dest)
{
	std::string	input;

	input.clear();
	while (input.empty())
	{
		std::cout << std::endl << "\033[3;32mEnter a nickname :\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	if (input.length() > 10)
	{
		input.resize(10);
		input[9] = '.';
	}
	dest.assign(input);
	return (dest);
}

std::string	Contact::get_phone_number(std::string dest)
{
	std::string	input;

	input.clear();
	while (input.empty())
	{
		std::cout << std::endl << "\033[3;32mEnter a phone number :\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	if (input.length() > 10)
	{
		input.resize(10);
		input[9] = '.';
	}
	dest.assign(input);
	return (dest);
}

std::string	Contact::get_darkest_secret(std::string dest)
{
	std::string	input;

	input.clear();
	while (input.empty())
	{
		std::cout << std::endl << "\033[3;32mEnter your darkest secret :\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	if (input.length() > 10)
	{
		input.resize(10);
		input[9] = '.';
	}
	dest.assign(input);
	return (dest);
}

void	Contact::addContact(std::string new_user, int index)
{
	_tab_contact[index][FIRST_NAME].assign(new_user);
	_tab_contact[index][LAST_NAME] = get_last_name(_tab_contact[index][LAST_NAME]);
	_tab_contact[index][NICKNAME] = get_nickname(_tab_contact[index][NICKNAME]);
	_tab_contact[index][PHONE_NUMBER] = get_phone_number(_tab_contact[index][PHONE_NUMBER]);
	_tab_contact[index][DARKEST_SECRET] = get_darkest_secret(_tab_contact[index][DARKEST_SECRET]);
	return ;
}
