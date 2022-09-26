/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:49:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 18:45:03 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	std::cout << YELCOLOR << "Cat is creating his brain... ..." << ENDCOLOR << std::endl;
	_brain = new Brain();
	std::cout << GRNCOLOR << "Brain of the cat is now ready !" << ENDCOLOR << std::endl;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat default destructor called" << std::endl;
	std::cout << YELCOLOR << "Trying to destroy cat brain ... ..." << ENDCOLOR << std::endl;
	delete _brain;
	std::cout << GRNCOLOR << "Brain of the cat successfully destroy !" << ENDCOLOR << std::endl;
	return ;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	this->_brain = copy._brain;
	return ;
}

Cat &   Cat::operator=( const Cat &rhs )
{
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = rhs._brain;
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << GRNCOLOR << "Meow, Meow" << ENDCOLOR << std::endl;
	return ;
}

const std::string &	Cat::getIdeas( int index ) const
{
	return this->_brain->_ideas[index];
}

void	Cat::setIdeas( std::string newIdea, const int index )
{
	this->_brain->_ideas[index].assign(newIdea);
	return ;
}