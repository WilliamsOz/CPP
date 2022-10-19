/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 10:57:45 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	checkChaining( void )
{
	FragTrap	unknowGuard;
	FragTrap	Guard( "Willy guard" );
	FragTrap	StrongGuard;

	StrongGuard = Guard;

	FragTrap	twinsGuard(StrongGuard);
	std::cout << std::endl;
	return ;
}

void	attacksUntillExhaustion( void )
{
	FragTrap	unknowGuard("AmbitiousFragTrap");

	for (int i = 0; i < 100 ; i++)
		unknowGuard.attack( "Moob" );
	unknowGuard.attack( "Moob" );
	return ;
}

void	highFive( void )
{
	FragTrap	highFiveTrap("Willy");

	highFiveTrap.highFivesGuys();
	return ;
}

int main ( void )
{
	// checkChaining();
	// attacksUntillExhaustion();
	highFive();
	return (0);
}