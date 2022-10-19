/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:25:59 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 12:52:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "Wrong Animal" )
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = copy.type;	
	return ;
}

WrongAnimal &    WrongAnimal::operator=( WrongAnimal &rhs )
{
	std::cout << "WrongAnimal assignation constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

const std::string &	WrongAnimal::getType( void ) const
{
	return this->type;
}

void	WrongAnimal::makeSound( void ) const
{
	SC(REDCOLOR)
	std::cout << "Hee-haw, Hee-haw" << std::endl;
	EC
	return ;
}