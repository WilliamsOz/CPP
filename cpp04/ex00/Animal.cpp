/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:44:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 16:14:46 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type( "Unknow" )
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal default destructor called" << std::endl;
	return ;
}

Animal::Animal( const Animal &copy )
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;	
	return ;
}

Animal &    Animal::operator=( Animal &rhs )
{
	std::cout << "Animal assignation constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

const std::string &	Animal::getType( void ) const
{
	return this->type;
}

void	Animal::makeSound( void ) const
{
	std::cout << YELCOLOR << "... ... ... ... Inaudible sound ... ... ... ..." << ENDCOLOR << std::endl;
	return ;
}