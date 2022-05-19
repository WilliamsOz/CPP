/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:52:49 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/19 14:50:50 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::addUser(std::string new_user, int index)
{
	_tab_user[index].assign(new_user);
	return ;
}

PhoneBook::PhoneBook(std::string p_add, std::string p_search, std::string p_exit)
	:	add(p_add),search(p_search), exit(p_exit)
{
	this->show_welcome_msg();
	return ;
}

PhoneBook::~PhoneBook( void )
{
	this->show_goodbye_msg();
	return ;
}
