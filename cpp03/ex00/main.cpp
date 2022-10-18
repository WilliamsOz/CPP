/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/18 16:43:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	getOneShoot( void )
{
	ClapTrap	unknow;

	unknow.takeDamage( 10 );
	unknow.attack( "Enemy" );
	unknow.beRepaired( 10 );
	unknow.takeDamage( 10 );
	return ;
}

void	fightUntillEnd( void )
{
	ClapTrap	willy("Willy");

	for (int i = 0 ; i < 10 ; i++)
		willy.attack( "Enemy" );
	willy.attack( "Enemy" );
	willy.beRepaired( 1 );
	willy.takeDamage( 10 );
	willy.takeDamage( 10 );
	return ;
}

void	fightUntillExhaustion( void )
{
	ClapTrap	willy("Willy");
	ClapTrap	strongWilly;
	
	strongWilly = willy;
	for (int i = 0 ; i < 5 ; i++)
		strongWilly.attack( "MvP" );
	strongWilly.takeDamage( 9 );
	for (int i = 0 ; i < 6 ; i++)
		strongWilly.beRepaired( 1 );
	strongWilly.attack( "MvP" );
	for (int i = 0 ; i < 6 ; i++)
		strongWilly.takeDamage( 1 );
	strongWilly.takeDamage( 1 );
}

void	checkClass( void )
{
	ClapTrap	unknow;
	ClapTrap	copy(unknow);
	ClapTrap	Willy("Willy");
	ClapTrap	assignement;

	assignement = unknow;
	std::cout << std::endl;
	return ;
}

int		main ( void )
{
	checkClass();
	// getOneShoot();
	// fightUntillEnd();
	// fightUntillExhaustion();
	return (0);
}