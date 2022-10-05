/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/05 13:50:38 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	checkChaining( void )
{
	ClapTrap    unknow;
	ScavTrap	unknowGuard;
	ScavTrap	Guard( "Willy guard" );
	ScavTrap	StrongGuard;
	
	StrongGuard = Guard;
	
	ScavTrap	twinsGuard(StrongGuard);
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

int main ( void )
{
	checkChaining();
	attacksUntillExhaustion();
	gateKeeperMode();
	return (0);
}