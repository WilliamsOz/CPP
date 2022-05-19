/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:11:26 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/19 16:15:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::print_unknow_cmd( void ) const
{
	std::cout << "\033[1;31mUnknow command, try again.\033[0m" << std::endl;
	return ;
}

void	PhoneBook::show_cmd( void ) const
{
	std::cout << std::endl << "\033[3;32mEnter a following command :\033[0m" << std::endl;
	std::cout << "\033[1;33m\"ADD\" : to add a new contact.\033[0m" << std::endl;
	std::cout << "\033[1;34m\"SEARCH\" : to search for a contact.\033[0m" << std::endl;
	std::cout << "\033[1;35m\"EXIT\" : to quit the program.\033[0m" << std::endl;
	return ;
}

void	PhoneBook::show_welcome_msg( void ) const
{
	std::cout << "\033[3;32mWelcome to your PhoneBook, enter a following command :\033[0m" << std::endl;
	std::cout << "\033[1;33m\"ADD\" : to add a new contact.\033[0m" << std::endl;
	std::cout << "\033[1;34m\"SEARCH\" : to search for a contact.\033[0m" << std::endl;
	std::cout << "\033[1;35m\"EXIT\" : to quit the program.\033[0m" << std::endl;
	return ;
}

void	PhoneBook::show_goodbye_msg( void ) const
{
	std::cout << "\033[3;32mSee you next time !\033[0m" << std::endl;
	return ;
}
