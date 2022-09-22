/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 08:30:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    getOneShoot( ClapTrap &weakWilly )
{
	weakWilly.takeDamage( 10 );
	weakWilly.attack( "Enemy" );
	weakWilly.beRepaired( 10 );
	weakWilly.takeDamage( 10 );
	return ;
}

void    fightUntillEnd( ClapTrap &willy )
{
	for (int i = 0 ; i < 10 ; i++)
		willy.attack( "Enemy" );
	willy.attack( "Enemy" );
	willy.beRepaired( 1 );
	willy.takeDamage( 10 );
	willy.takeDamage( 10 );
	return ;
}

void	fightUntillExhaustion( ClapTrap &strongWIlly )
{
	for (int i = 0 ; i < 5 ; i++)
		strongWIlly.attack( "MvP" );
	strongWIlly.takeDamage( 9 );
	for (int i = 0 ; i < 6 ; i++)
		strongWIlly.beRepaired( 1 );
	strongWIlly.attack( "MvP" );
	for (int i = 0 ; i < 6 ; i++)
		strongWIlly.takeDamage( 1 );
	strongWIlly.takeDamage( 1 );
}

int main ( void ) //pb assignation operator //pb copy contructor
{
	ClapTrap    unknow;
	ClapTrap    willy("Willy");
	ClapTrap	strongWilly;
	
	strongWilly = willy;
	getOneShoot( unknow );
	// fightUntillEnd( willy );
	// fightUntillExhaustion( strongWilly );
	return (0);
}