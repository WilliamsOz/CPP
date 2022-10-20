/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:20:23 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 22:55:12 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

WrongCat::WrongCat( void )
{
	this->type = "Wrong Cat";
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat default destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat &copy )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = copy.type;
	return ;
}

WrongCat &    WrongCat::operator=( const WrongCat &rhs )
{
	std::cout << "WrongCat assignation constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound( void ) const
{
	SC(REDCOLOR)
	std::cout << "Wrong animal cat try to make sounds..." << std::endl;
	EC
	return ;
}
