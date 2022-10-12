/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:03 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 10:02:46 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

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

void	Contact::showContact(PhoneBook phonebook)
{
	std::string	num;

	printSummary(_tab_contact);
	num.clear();
	if (!(phonebook.getUser(0).empty()))
	{
		std::cout << "\033[3;32mEnter a valid index between 0 and 7 inclusive, corresponding to the user :\033[0m" << std::endl;
		std::getline(std::cin, num);
		if (std::cin.eof())
			return ;
		while (num.empty() || num.size() >= 2 || num.size() == 0 || is_index(num) == FALSE || ft_stoi(num) < 0 || ft_stoi(num) > 7 || _tab_contact[ft_stoi(num)][0].empty())
		{
			std::cout << std::endl << "\033[1;31mIncorrect input, enter an integer between 0 and 7 inclusive corresponding to an existing and valid user.\033[0m" << std::endl;
			std::cout << "\033[3;32mHere are valid user(s) indexes :\033[0m" << std::endl << std::endl;
			printSummary(_tab_contact);
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
		if (std::cin.eof())
			return (dest);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
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
		if (std::cin.eof())
			return (dest);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
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
		if (std::cin.eof())
			return (dest);
		else if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
		else if (only_number(input) == FALSE)
		{
			std::cout << "\033[1;31mOnly numbers are allowed !\033[0m" << std::endl;
			input.clear();
		}
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
		if (std::cin.eof())
			return (dest);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	dest.assign(input);
	return (dest);
}

void	Contact::addContact(std::string new_user, int index)
{
	if (std::cin.eof())
		return ;
	_tab_contact[index][FIRST_NAME].assign(new_user);
	_tab_contact[index][LAST_NAME] = get_last_name(_tab_contact[index][LAST_NAME]);
	if (std::cin.eof())
		return ;
	_tab_contact[index][NICKNAME] = get_nickname(_tab_contact[index][NICKNAME]);
	if (std::cin.eof())
		return ;
	_tab_contact[index][PHONE_NUMBER] = get_phone_number(_tab_contact[index][PHONE_NUMBER]);
	if (std::cin.eof())
		return ;
	_tab_contact[index][DARKEST_SECRET] = get_darkest_secret(_tab_contact[index][DARKEST_SECRET]);
	if (std::cin.eof())
		return ;
	std::cout << std::endl << "\033[1;32m" << new_user << ", has been successfully added !" << "\033[0m" << std::endl;
	return ;
}
