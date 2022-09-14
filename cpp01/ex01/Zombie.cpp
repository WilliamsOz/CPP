/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:10:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 09:52:08 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setHordeName( std::string horde_name )
{
	this->_name = horde_name;
	return ;
}

void	Zombie::announce( void ) const
{
	std::cout << "\033[1;32m" << _name << ": BraiiiiiiinnnzzzZ..." << "\033[1;32m" << std::endl;
	return ;
}

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}
