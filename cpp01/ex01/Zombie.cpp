/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:10:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/24 14:41:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	announce();
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Delete : " << this->_name << std::endl;
	return ;
}
