/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:39:41 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 17:45:13 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->_ideas[i] = "Empty";
	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain default destructor called" << std::endl;
	return ;
}

Brain::Brain ( const Brain &copy )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->_ideas[i] = copy._ideas[i];
	return ;
}

Brain & Brain::operator=( const Brain &rhs )
{
	std::cout << "Brain Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0 ; i < 100 ; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}