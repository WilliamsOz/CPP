/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 11:44:57 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	checkChaining( void )
{
	ClapTrap    unknow;
	ScavTrap	unknowGuard;
	ScavTrap	willyGuard( "Willy guard" );
	ScavTrap	willyStrongGuard;

	willyStrongGuard = willyGuard;
	return ;
}

void	attacksUntillExhaustion( void )
{
	ScavTrap	unknowGuard;

	for (int i = 0; i < 50 ; i++)
		unknowGuard.attack( "Moob" );
	unknowGuard.attack( "Moob" );
	return ;
}

void	gateKeeperMode( void )
{
	ScavTrap	gateKeeperGuard;

	gateKeeperGuard.guardGate();
	gateKeeperGuard.guardGate();
	return ;
}

int main ( void ) //pb assignation operator //pb copy contructor
{
	checkChaining();
	// attacksUntillExhaustion();
	// gateKeeperMode();
	return (0);
}