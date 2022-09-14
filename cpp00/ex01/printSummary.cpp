/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printSummary.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:47:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 12:34:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	printHeader( void )
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

void	resizeReplaceAndPrint( std::string str)
{
	str.resize(10);
	str[9] = '.';
	std::cout << str;
}

void	printSummary(std::string _tab_contact[8][5])
{
	int	i;

	printHeader();
	i = 0;
	while (!(_tab_contact[i][0].empty()) && i < 8)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout <<std::setw(10);
		if (_tab_contact[i][FIRST_NAME].length() > 10)
			resizeReplaceAndPrint(_tab_contact[i][FIRST_NAME]);
		else
			std::cout << _tab_contact[i][FIRST_NAME];
		std::cout << "|";
		std::cout <<std::setw(10);
		if (_tab_contact[i][LAST_NAME].length() > 10)
			resizeReplaceAndPrint(_tab_contact[i][LAST_NAME]);
		else
			std::cout << _tab_contact[i][LAST_NAME];
		std::cout << "|";
		std::cout <<std::setw(10);
		if (_tab_contact[i][NICKNAME].length() > 10)
			resizeReplaceAndPrint(_tab_contact[i][NICKNAME]);
		else
			std::cout << _tab_contact[i][NICKNAME];
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}
