/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:45:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 18:10:57 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "Unknow";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap default destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap default constructor called from " << this->_name << " to " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( FragTrap const &copy )
{
	std::cout << "Copy constructor from " << this->_name << " to " << copy._name << " has been called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

FragTrap &	FragTrap::operator=( FragTrap &rhs )
{
	std::cout << "FragTrap assignation operator called from "
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

void	FragTrap::highFivesGuys( void )
{
	std::cout << GRNCOLOR << this->_name << " ask for a positive high fives :,) !" << ENDCOLOR << std::endl;
	return ;
}
