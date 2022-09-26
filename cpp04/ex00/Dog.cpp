/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:38 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 17:27:12 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog default destructor called" << std::endl;
	return ;
}

Dog::Dog ( const Dog &copy ) : Animal(copy)
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
	std::cout << MAGCOLOR << "Wouaf, Wouaf" << ENDCOLOR << std::endl;
	return ;
}