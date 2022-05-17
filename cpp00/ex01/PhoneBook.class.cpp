/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:52:49 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/17 12:36:19 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook( std::string p_add, std::string p_search, std::string p_exit )
	:	add(p_add),search(p_search), exit(p_exit)
{
	std::cout << "\033[3;32mWelcome to your Phonebook, please enter a following command :\033[0m" << std::endl;
	std::cout << "\033[1;33m\"ADD\" : to add a new contact.\033[0m" << std::endl;
	std::cout << "\033[1;34m\"SEARCH\" : to search for a contact.\033[0m" << std::endl;
	std::cout << "\033[1;35m\"EXIT\" : to quit the program.\033[0m" << std::endl;
	
	return ;
}

Phonebook::~Phonebook( void )
{
	std::cout << "\033[3;32mSee you next time !\033[0m" << std::endl;
	return ;
}
