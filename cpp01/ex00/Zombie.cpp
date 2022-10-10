/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:54:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 13:10:22 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << "\033[1;32m" << _name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
	return ;
}

void	Zombie::introduceYourself( Zombie *heapZombie) const
{
	heapZombie->announce();
	return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "\033[1;31m" << this->_name << " walked on a clove garlic, unfortunately he died." << "\033[0m" << std::endl;
	return ;
}
