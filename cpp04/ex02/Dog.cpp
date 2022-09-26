/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 18:50:15 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog( void ) : AAnimal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	std::cout << YELCOLOR << "Dog is creating his brain... ..." << ENDCOLOR << std::endl;
	_brain = new Brain();
	std::cout << GRNCOLOR << "Brain of the dog is now ready !" << ENDCOLOR << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog default destructor called" << std::endl;
		std::cout << YELCOLOR << "Trying to destroy dog brain ... ..." << ENDCOLOR << std::endl;
	delete this->_brain;
	std::cout << GRNCOLOR << "Brain of the dog successfully destroy !" << ENDCOLOR << std::endl;
	return ;
}

Dog::Dog ( const Dog &copy ) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
	this->_brain = copy._brain;
	return ;
}

Dog &   Dog::operator=( Dog &rhs )
{
	std::cout << "Dog assignation constructor called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = rhs._brain;
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << MAGCOLOR << "Wouaf, Wouaf" << ENDCOLOR << std::endl;
	return ;
}

const std::string	&	Dog::getIdeas( int index ) const
{
	return this->_brain->_ideas[index];
}

void	Dog::setIdeas( std::string newIdea, const int index )
{
	this->_brain->_ideas[index].assign(newIdea);
	return ;
}