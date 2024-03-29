/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:11:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 13:22:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponPTR(NULL)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weaponPTR = &weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	std::cout << "\033[1;34m" << _name << " attacks with their " << _weaponPTR->getType() << "\033[0m" << std::endl;
	return ;
}
