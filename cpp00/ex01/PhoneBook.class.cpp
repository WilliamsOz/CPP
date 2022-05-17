/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:52:49 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/17 10:58:57 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Phonebook( void )
{
	std::cout << "Salut bg ta appeler la fct membre" << std::endl;
	return ;
}