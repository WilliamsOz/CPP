/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 10:35:12 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    badInstantiate( void )
{
	Bureaucrat  Willy("Willy", 155);

	return ;
}

void    reachHighRank( void )
{
	Bureaucrat  Willy("Willy", 5);
	
	std::cout << MAGCOLOR << Willy.getName()
	<< " has been successfully create with grade : "
	<< Willy.getGrade() << ENDCOLOR << std::endl;
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

	std::cout << MAGCOLOR << Willy.getName()
	<< " has been successfully create with grade : "
	<< Willy.getGrade() << ENDCOLOR << std::endl;
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	Willy.levelDown();
	return ;
}

int main(void)
{
	badInstantiate();
	std::cout << std::endl;
	reachHighRank();
	std::cout << std::endl;
	reachLowRank();
	return (0);
}