/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:45:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/17 12:32:33 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main(void)
{
	std::string	input;
	Phonebook	p_b("ADD", "SEARCH", "EXIT");

	while (1)
	{
		std::cin >> input;
		if (input.compare(p_b.add) == 0)
		{
			std::cout << "ADD CALLED" << std::endl;
		}
		else if (input.compare(p_b.search) == 0)
		{
			std::cout << "SEARCH CALLED" << std::endl;
		}
		else if (input.compare(p_b.exit) == 0)
			break ;
		else
			std::cout << "\033[6;31mUnknow command, please try again.\033[0m" << std::endl;
	}
	return (0);
}
