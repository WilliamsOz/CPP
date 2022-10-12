/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SummonClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:58:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/12 15:07:54 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SummonClass.hpp"

Base *	generate( void )
{
	int		randomNumber;

	randomNumber = rand() % 3;
	if (randomNumber == 0)
	{
		return (new A());
	}
	else if (randomNumber == 1)
	{
		return (new B());
	}
	return (new C());
}

void	identify(Base *p)
{
	A	*ptrA = dynamic_cast<A*>(p);
	B	*ptrB = dynamic_cast<B*>(p);
	C	*ptrC = dynamic_cast<C*>(p);

	if (ptrA != NULL)
		std::cout << "| " << BLUECOLOR << "I am from class A" << ENDCOLOR << " |" << std::endl;
	else if (ptrB != NULL)
		std::cout << "| " << MAGCOLOR << "I am from class B" << ENDCOLOR << " |" << std::endl;
	else if (ptrC != NULL)
		std::cout << "| " << YELCOLOR << "I am from class C" << ENDCOLOR << " |" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		A	&refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "| " << BLUECOLOR << "I am from class A" << ENDCOLOR << " |" << std::endl;
		return ;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		B	&refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "| " << MAGCOLOR << "I am from class B" << ENDCOLOR << " |" << std::endl;
		return ;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		C	&refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "| " << YELCOLOR << "I am from class C" << ENDCOLOR << " |" << std::endl;
		return ;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}