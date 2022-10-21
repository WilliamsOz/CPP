/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:37:28 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	gradeInstantiacionTooLow( void )
{
	Bureaucrat  Willy("Willy", 155);

	std::cout << MAGCOLOR << Willy << ENDCOLOR;
	return ;
}

void	gradeInstantiacionTooHigh( void )
{
	Bureaucrat	Willy("Willy", 0);

	std::cout << MAGCOLOR << Willy << ENDCOLOR;
	return ;
}

void	reachHighRank( void )
{
	Bureaucrat	Willy("Willy", 5);

	SC(MAGCOLOR)
	std::cout << Willy;
	EC
	Willy.levelUp();
	Willy.levelUp();
	Willy.levelUp();
	Willy.levelUp();
	SC(MAGCOLOR)
	std::cout << Willy;
	EC
	Willy.levelUp();
	return ;
}

void	reachLowRank( void )
{
	Bureaucrat	Willy("Willy", 146);

	SC(MAGCOLOR)
	std::cout << Willy;
	EC
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	SC(MAGCOLOR)
	std::cout << Willy;
	EC
	Willy.levelDown();
	return ;
}

void	badInstantiacionTest( void )
{
	gradeInstantiacionTooLow();
	std::cout << std::endl;
	gradeInstantiacionTooHigh();
	return ;
}

int main(void)
{
	badInstantiacionTest();
	// reachHighRank();
	// reachLowRank();
	return (0);
}