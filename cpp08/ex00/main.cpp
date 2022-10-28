/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/28 14:25:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/*-------------------------------------------------------[Integer Test]-------------------------------------------------------*/
void	integerFound( void )
{
	std::vector<int>	v(42, 100);
	std::vector<int>::iterator	it;

	v.assign(42, 42);
	try
	{
		it = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *it << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	integerNotFound( void )
{
	std::vector<int>	v(42, 100);
	std::vector<int>::iterator	it;

	try
	{
		it = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *it << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	integerVectorTest( void )
{
	integerFound();
	integerNotFound();
	return ;
}
/*-------------------------------------------------------END OF INTEGER TEST-------------------------------------------------------*/



/*-------------------------------------------------------[Char Test]-------------------------------------------------------*/
void	charFound( void )
{
	std::vector<char>	v;
	std::vector<char>::iterator	it;

	for (int i = 0 ; i < 100 ; i++)
		v.push_back('.');
	v.at(42) = '*';
	try
	{
		it = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *it << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	charNotFound( void )
{
	std::vector<char>	v;
	std::vector<char>::iterator	it;

	for (int i = 0 ; i < 100 ; i++)
		v.push_back('.');
	try
	{
		it = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *it << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	charVectorTest( void )
{
	charFound();
	charNotFound();
	return ;
}
/*-------------------------------------------------------END OF CHAR TEST-------------------------------------------------------*/





int main( void )
{
	// integerVectorTest();
	// charVectorTest();
	// doubleVectorTest();
	return 0;
}