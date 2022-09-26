/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:25:59 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 16:33:23 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "WrongAnimal" )
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
	std::cout << REDCOLOR << "Hee-haw, Hee-haw" << ENDCOLOR << std::endl;
	return ;
}