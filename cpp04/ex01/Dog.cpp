/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 13:49:32 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	SC(YELCOLOR)
	std::cout << "Dog is creating his brain... ..." << std::endl;
	EC
	_brain = new Brain();
	SC(GRNCOLOR)
	std::cout << "Brain of the dog is now ready !" << std::endl;
	EC
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog default destructor called" << std::endl;
	SC(YELCOLOR)
	std::cout << "Trying to destroy dog brain ... ..." << std::endl;
	EC
	delete _brain;
	SC(GRNCOLOR)
	std::cout << "Brain of the dog successfully destroy !" << std::endl;
	EC
	return ;
}

Dog::Dog ( const Dog &copy )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	return ;
}

Dog &   Dog::operator=( Dog &rhs )
{
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	Dog::makeSound( void ) const
{
	SC(MAGCOLOR)
	std::cout << "Wouaf, Wouaf" << std::endl;
	EC
	return ;
}