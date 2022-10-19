/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:45:17 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 10:50:41 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	SC(MAGCOLOR)
	std::cout << "FragTrap default constructor called" << std::endl;
	EC
	this->_name = "Unknow";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap( void )
{
	SC(MAGCOLOR)
	std::cout << "FragTrap default destructor called" << std::endl;
	EC
	return ;
}

FragTrap::FragTrap( std::string name )
{
	SC(MAGCOLOR)
	std::cout << "FragTrap default constructor called" << std::endl;
	EC
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( FragTrap const &copy )
{
	SC(MAGCOLOR)
	std::cout << "FragTrap copy constructor called" << std::endl;
	EC
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return ;
}

FragTrap &	FragTrap::operator=( FragTrap &rhs )
{
	SC(MAGCOLOR)
	std::cout << "FragTrap assignation operator called" << std::endl;
	EC
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
	SC(GRNCOLOR)
	std::cout << this->_name << " ask for a positive high fives :,) !" << std::endl;
	EC
	return ;
}
