/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:20:23 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 16:33:54 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructo called" << std::endl;
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
	std::cout << REDCOLOR << "Hee-haw, Hee-haw" << ENDCOLOR << std::endl;
	return ;
}
