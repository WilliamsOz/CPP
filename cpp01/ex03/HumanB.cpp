/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:11:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/25 13:31:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
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

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << _weaponPTR->getType() << std::endl;
	return ;
}
