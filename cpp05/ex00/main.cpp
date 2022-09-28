/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 18:27:38 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    gradeInstantiacionTooLow( void )
{
	Bureaucrat  Willy("Willy", 155);

	std::cout << MAGCOLOR << Willy << ENDCOLOR;
	return ;
}

void    gradeInstantiacionTooHigh( void )
{
	Bureaucrat  Willy("Willy", 0);

	std::cout << MAGCOLOR << Willy << ENDCOLOR;
	return ;
}

void    reachHighRank( void )
{
	Bureaucrat  Willy("Willy", 5);
	
	std::cout << MAGCOLOR << Willy << ENDCOLOR;
	Willy.levelUp();
	Willy.levelUp();
	Willy.levelUp();
	Willy.levelUp();
	Willy.levelUp();
	return ;
}

void	reachLowRank( void )
{
	Bureaucrat  Willy("Willy", 146);

	std::cout << MAGCOLOR << Willy << ENDCOLOR;
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	return ;
}

int main(void)
{
	gradeInstantiacionTooLow();
	std::cout << std::endl;
	gradeInstantiacionTooHigh();
	std::cout << std::endl;
	// reachHighRank();
	// std::cout << std::endl;
	// reachLowRank();
	return (0);
}