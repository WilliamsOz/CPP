/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:10:36 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 11:40:01 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	Weapon::getType()
{
	std::string	&typeREF = this->_type;
	return typeREF;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}
