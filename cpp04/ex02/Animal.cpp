/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:44:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 18:48:34 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) : type( "Unknow" )
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal default destructor called" << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal &copy )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->type = copy.type;	
	return ;
}

AAnimal &    AAnimal::operator=( AAnimal &rhs )
{
	std::cout << "AAnimal assignation constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

const std::string &	AAnimal::getType( void ) const
{
	return this->type;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << YELCOLOR << "... ... ... ... Inaudible sound ... ... ... ..." << ENDCOLOR << std::endl;
	return ;
}