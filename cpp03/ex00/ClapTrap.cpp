/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:22 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 10:33:19 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
: _name("Unknow"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << MAGCOLOR << "ClapTrap default contructor called" << ENDCOLOR << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << MAGCOLOR << "ClapTrap default destructor called" << ENDCOLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name )
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << MAGCOLOR << "Claptrap string constructor called" << ENDCOLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &copy )
{
	std::cout << MAGCOLOR << "ClapTrap copy constructor called" << ENDCOLOR << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap &rhs )
{
	std::cout << MAGCOLOR << "ClapTrap assignation operator called" << ENDCOLOR << std::endl;
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
	if (_energyPoints <= 0)
	{
		SC(YELCOLOR)
		std::cout << "ClapTrap " << _name << " try to attacks "
		<< target << " but his energy points are empty !" << std::endl;
		EC
		return ;
	}
	else if (_hitPoints <= 0)
	{
		SC(REDCOLOR)
		std::cerr << "ClapTrap " << _name <<  " is dead, he can't attacks !" << std::endl;
		EC
		return ;
	}
	_energyPoints -= 1;
	SC(GRNCOLOR)
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
	<< _attackDamage << " points of damage !" << std::endl;
	EC
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoints <= 0)
	{
		SC(REDCOLOR)
		std::cerr << "ClapTrap " << _name << " is already dead, he can not take more damage !" << std::endl;
		EC
		return ;
	}
	SC(YELCOLOR)
	std::cout << "ClapTrap " << _name << " get hit, he take " << amount << " points of damage !" << std::endl;
	EC
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints <= 0)
	{
		SC(REDCOLOR)
		std::cerr << "ClapTrap " << _name << " is dead, he can't repair himself !" << std::endl;
		EC
		return ;
	}
	else if (_energyPoints == 0)
	{
		SC(YELCOLOR)
		std::cerr << "ClapTrap " << _name << " try to repair himself but his energy point are empty !" << std::endl;
		EC
		return ;
	}
	SC(BLUECOLOR)
	std::cout << "ClapTrap " << _name << " repair himself, he recover " << amount << " hit points !" << std::endl;
	_hitPoints += amount;
	_energyPoints -= 1;
	return ;
}