/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:45:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/26 15:54:09 by wiozsert         ###   ########.fr       */
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
	// int			user_counter = 0;

	// user_counter = 0;
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
		else
			phonebook.print_unknow_cmd();
		if (phonebook.getUserCounter() == 8)
		{
			std::cout << std::endl << "\033[1;31m¡ Be careful, each new user added will delete the oldest one!\033[m" << std::endl;
			phonebook.resetUserCounter();
		}
		phonebook.show_cmd();
	}
	std::cout << "\033[3;32mSee you next time !\033[0m" << std::endl;
	return (0);
}
