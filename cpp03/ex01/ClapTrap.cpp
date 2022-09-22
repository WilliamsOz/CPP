/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 17:51:57 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
: _name("Unknow"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default contructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name )
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << name << "constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &copy )
{
	std::cout << "Copy constructor from " << this->_name << " to " << copy._name << " has been called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	ClapTrap::attack( const std::string &target )
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELCOLOR << "ClapTrap " << this->_name
		<< " try to attacks " << target << " but his energy points are empty"
		<< ENDCOLOR << std::endl;
		if (this->_energyPoints < 0)
			this->_energyPoints = 0;
		return ;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << REDCOLOR
		<< "ClapTrap " << this->_name
		<<  " is dead, he can not attacks" << ENDCOLOR << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << GRNCOLOR << "ClapTrap " << this->_name
	<< " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage" 
	<< ", energy point left " << this->_energyPoints << ENDCOLOR << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << REDCOLOR
		<< "ClapTrap " << this->_name << " is already dead, he can not take more damage"
		<< ENDCOLOR << std::endl;
		return ;
	}
	std::cout << REDCOLOR << "ClapTrap " << this->_name
	<< " get hit, and he lose " << amount
	<< " of his hit points, ";
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << this->_hitPoints << " left" << ENDCOLOR << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << REDCOLOR
		<< "ClapTrap " << this->_name
		<<  " is dead, he can not repair himself"
		<< ENDCOLOR << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << REDCOLOR
		<< "ClapTrap " << this->_name
		<< " try to repair himself but energy point are empty"
		<< ENDCOLOR << std::endl;
		return ;
	}
	std::cout << BLUECOLOR << "ClapTrap " << this->_name
	<< " repair himself, he recover " << amount
	<< " of hit energy points" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	std::cout << "Energy point left : " << this->_energyPoints
	<< " | Hit point left : " << this->_hitPoints << ENDCOLOR << std::endl;
	return ;
}

