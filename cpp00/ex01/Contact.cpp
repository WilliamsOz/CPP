/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:03 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/23 21:01:18 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	Contact::printSummary( void ) const
{
	int	i;

	std::cout << std::setw(10);
	std::cout << "index" << "|";
	std::cout << std::setw(10);
	std::cout << "first name" << "|";
	std::cout << std::setw(10);
	std::cout << "last name" << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << std::endl;
	i = 0;
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
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}

bool	Contact::is_index( std::string num ) const
{
	if (num[0] >= '0' && num[0] <= '7')
		return (TRUE);
	else
		return (FALSE);
}

int		Contact::ft_stoi( std::string str ) const
{
	int	res = 0;

	return (res * 10 + (str[0] - '0'));
}

void	Contact::showContact(PhoneBook phonebook) const
{
	std::string	num;

	printSummary();
	num.clear();
	if (!(phonebook.getUser(0).empty()))
	{
		std::cout << "\033[3;32mEnter a valid index between 0 and 7 inclusive, corresponding to the user :\033[0m" << std::endl;
		std::getline(std::cin, num);
		while (num.empty() || num.size() >= 2 || num.size() == 0 || is_index(num) == FALSE || ft_stoi(num) < 0 || ft_stoi(num) > 7 || _tab_contact[ft_stoi(num)][0].empty())
		{
			std::cout << std::endl << "\033[1;31mIncorrect input, enter an integer between 0 and 7 inclusive corresponding to an existing and valid user.\033[0m" << std::endl;
			std::cout << "\033[3;32mHere are valid user(s) indexes :\033[0m" << std::endl << std::endl;
			printSummary();
			num.clear();
			std::getline(std::cin, num);
		}
		std::cout << "\nFirst name : " << _tab_contact[ft_stoi(num)][0] << std::endl;
		std::cout << "Last name : " << _tab_contact[ft_stoi(num)][1] << std::endl;
		std::cout << "Nickname : " << _tab_contact[ft_stoi(num)][2] << std::endl;
		std::cout << "Phone number : " << _tab_contact[ft_stoi(num)][3] << std::endl;
		std::cout << "Darkest secret : " << _tab_contact[ft_stoi(num)][4] << std::endl;
	}
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

bool Contact::only_number(std::string str) const
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (FALSE);
		else
			i++;
	}
	return (TRUE);
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
		else if (only_number(input) == FALSE)
		{
			std::cout << "\033[1;31mOnly numbers are allowed !\033[0m" << std::endl;
			input.clear();
		}
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
