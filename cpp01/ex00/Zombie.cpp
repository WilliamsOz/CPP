/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:54:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 08:14:39 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << "\033[1;32m" << _name << ": BraiiiiiiinnnzzzZ..." << "\033[1;32m" << std::endl;
	return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "\033[1;31m" << this->_name << " walked on a clove garlic, unfortunately he died." << std::endl;
	return ;
}
