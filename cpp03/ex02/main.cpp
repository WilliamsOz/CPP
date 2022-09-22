/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 18:11:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	checkChaining( void )
{
	ClapTrap    unknow;
	FragTrap	unknowGuard;
	FragTrap	Guard( "Willy guard" );
	FragTrap	StrongGuard;

	StrongGuard = Guard;

	FragTrap	twinsGuard(StrongGuard);
	return ;
}

int main ( void )
{
	checkChaining();
	

	return (0);
}