/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:50:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 10:47:18 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	SC(MAGCOLOR)
	std::cout << "ScavTrap default constructor called" << std::endl;
	EC
	_name = "Unknow";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	SC(MAGCOLOR)
	std::cout << "ScavTrap default destructor called" << std::endl;
	EC
	return ;
}

ScavTrap::ScavTrap( std::string name )
{
	SC(MAGCOLOR)
	std::cout << "ScavTrap string constructor called" << std::endl;
	EC
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const &copy )
{
	SC(MAGCOLOR)
	std::cout << "ScavTrap copy constructor called" << std::endl;
	EC
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return ;
}

ScavTrap &	ScavTrap::operator=( ScavTrap &rhs )
{
	SC(MAGCOLOR)
	std::cout << "ScavTrap assignation operator called" << std::endl;
	EC
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate( void )
{
	if (_status == GATEKEEPER_MODE_OFF)
	{
		_status = GATEKEEPER_MODE_ON;
		SC(GRNCOLOR)
		std::cout << "Gatekeeper mode now on" << std::endl;;
		EC
	}
	else
	{
		_status = GATEKEEPER_MODE_OFF;
		SC(REDCOLOR)
		std::cout << "Gatekeeper mode now off" << std::endl;
		EC
	}
	return ;
}

void	ScavTrap::attack( const std::string &target )
{
	if (_hitPoints == 0)
	{
		SC(REDCOLOR)
		std::cout << "ScavTrap " << _name << " try to attack, but he is already dead" << std::endl;
		EC
		return ;
	}
	else if (_energyPoints == 0)
	{
		SC(REDCOLOR)
		std::cout << "ScavTrap " << _name << " try to attack, but his energy point are empty" << std::endl;
		EC
		return ;
	}
	_energyPoints -= 1;
	SC(GRNCOLOR)
	std::cout << "ScavTrap " << _name
	<< " attacks " << target << ", causing "
	<< _attackDamage << " points of damage" << std::endl;
	EC
}

int		ScavTrap::_status = GATEKEEPER_MODE_OFF;