/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:50:37 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/05 13:50:36 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ScavTrap::ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "Unknow";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "ScavTrap default constructor called from " << this->_name << " to " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;	
}

ScavTrap::ScavTrap( ScavTrap const &copy )
{
	std::cout << "Copy constructor from " << this->_name << " to " << copy._name << " has been called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

ScavTrap &	ScavTrap::operator=( ScavTrap &rhs )
{
	std::cout << "ScavTrap assignation operator called from "
	<< this->_name << " to " << rhs._name << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate( void )
{
	if (this->_status == GATEKEEPER_MODE_OFF)
	{
		this->_status = GATEKEEPER_MODE_ON;
		std::cout << GRNCOLOR << "Gatekeeper mode now on"
		<< ENDCOLOR << std::endl;;
	}
	else
	{
		this->_status = GATEKEEPER_MODE_OFF;
		std::cout << REDCOLOR << "Gatekeeper mode now off"
		<< ENDCOLOR << std::endl;
	}
	return ;
}

void    ScavTrap::attack( const std::string &target )
{
	if (this->_hitPoints == 0)
	{
		std::cout << REDCOLOR << "ScavTrap " << this->_name
		<< " try to attack, but he is already dead"
		<< ENDCOLOR << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << REDCOLOR << "ScavTrap " << this->_name
		<< " try to attack, but his energy point are empty"
		<< ENDCOLOR << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << GRNCOLOR << "ScavTrap " << this->_name
	<< " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage" 
	<< ", energy point left " << this->_energyPoints << ENDCOLOR << std::endl;
}

int ScavTrap::_status = GATEKEEPER_MODE_OFF;