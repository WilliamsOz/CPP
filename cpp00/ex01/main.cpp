/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:45:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/19 14:51:25 by wiozsert         ###   ########.fr       */
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
	int			user_counter = 0;

	user_counter = 0;
	while (1)
	{
		std::getline(std::cin, input);
		std::cout << input << std::endl;
		if (input.compare(phonebook.add) == 0)
		{
			std::getline(std::cin, input);
			phonebook.addUser(input, user_counter);
			user_counter += 1;
		}
		else if (input.compare(phonebook.search) == 0)
		{
			std::cout << "SEARCH CALLED" << std::endl;
		}
		else if (input.compare(phonebook.exit) == 0)
			break ;
		else
			phonebook.print_unknow_cmd();
		phonebook.show_cmd();
	}
	return (0);
}
