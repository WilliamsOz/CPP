/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:03 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/21 14:34:43 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	Contact::showContact( void ) const
{
	int i = 0;

	while (i < 8)
	{
		std::cout << std::setw(10);
		std::cout << _tab_contact[i][0] << "|";
		i++;
	}
	return ;
}

void	Contact::get_last_name(std::string dest)
{
	std::string	input;

	input.clear();
	while (input.empty())
	{
		std::cout << std::endl << "\033[3;32mEnter a last name.\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "\033[1;31mInput must not be empty !\033[0m" << std::endl;
	}
	if (input.length() > 10)
	{
		dest.resize(10);
		input[9] = '.';
	}
	dest.assign(input);
	return ;
}

// first name (prénom)
// last name (nom de famille)
// nickname (surnom)
// phone number (numéro de téléphone)
// darkest secret (son plus lourd secret).

void	Contact::addContact(std::string new_user, int index)
{
	_tab_contact[index][0].assign(new_user);
	get_last_name(_tab_contact[index][1]);
	// get_nickname();
	// get_phone_number();
	// get_darkest_secret();
	return ;
}
