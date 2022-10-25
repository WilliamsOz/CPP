/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:49:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/25 11:01:39 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	SC(YELCOLOR)
	std::cout << "Cat is creating his brain... ..." << std::endl;
	EC
	_brain = new Brain();
	SC(GRNCOLOR)
	std::cout << "Brain of the cat is now ready !" << std::endl;
	EC
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat default destructor called" << std::endl;
	SC(YELCOLOR)
	std::cout << "Trying to destroy cat brain ... ..." << std::endl;
	EC
	delete _brain;
	SC(GRNCOLOR)
	std::cout << "Brain of the cat successfully destroy !" << std::endl;
	EC
	return ;
}

Cat::Cat( const Cat &copy )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	// this->_brain = copy._brain;
	for (int i = 0 ; i < 100 ; i++)
		this->_brain->_ideas[i] = copy._brain->_ideas[i];
	return ;
}

Cat &   Cat::operator=( const Cat &rhs )
{
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		// this->_brain = rhs._brain;
		for (int i = 0 ; i < 100 ; i++)
			this->_brain->_ideas[i] = rhs._brain->_ideas[i];
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	SC(GRNCOLOR)
	std::cout << "Meow, Meow" << std::endl;
	EC
	return ;
}