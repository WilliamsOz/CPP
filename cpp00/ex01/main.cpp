/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:45:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/19 15:08:23 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main(void)
{
	std::string	input;
	PhoneBook	phonebook("ADD", "SEARCH", "EXIT");
	Contact		contact;

	while (1)
	{
		std::getline(std::cin, input);
		if (input.compare(phonebook.add) == TRUE)
		{
			phonebook.addUser(input, phonebook.getUserCounter());
			contact.addContact(phonebook.tab_user[phonebook.getUserCounter()],
				phonebook.getUserCounter());
			phonebook.addUserCounter();
		}
		else if (input.compare(phonebook.search) == TRUE)
			contact.showContact(phonebook);
		else if (input.compare(phonebook.exit) == TRUE)
			break ;
		else if (!std::cin.eof())
		{
			if (!input.empty())
				phonebook.print_unknow_cmd();
			else
				phonebook.print_empty_input();
		}
		if (phonebook.getUserCounter() == 8)
		{
			std::cout << std::endl << "\033[1;31m¡ Be careful, each new user added will delete the oldest one!\033[m" << std::endl;
			phonebook.resetUserCounter();
		}
		if (std::cin.eof())
			break ;
		phonebook.show_cmd();
	}
	phonebook.show_goodbye_msg();
	return (0);
}
