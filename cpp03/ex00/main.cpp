/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/21 18:08:47 by wiozsert         ###   ########.fr       */
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
	return ;
}

int main ( void ) //pb assignation operator //pb copy contructor
{
	ClapTrap    unknow;
	ClapTrap    willy("Willy");
	ClapTrap	strongWilly;
	
	strongWilly =  willy;
	// ClapTrap    strongWilly( unknow );

	getOneShoot( unknow );
	fightUntillEnd( willy );
	fightUntillEnd( strongWilly );
	return (0);
}