/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:49:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 22:55:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

Cat::Cat( const Cat &copy )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	return ;
}

Cat &   Cat::operator=( const Cat &rhs )
{
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	Cat::makeSound( void ) const
{
	SC(GRNCOLOR)
	std::cout << "Meow, Meow" << std::endl;
	EC
	return ;
}