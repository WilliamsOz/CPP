/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/29 13:53:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	integerFound( void )
{
	std::vector<int>			v(42, -42);
	std::vector<int>::iterator	iterator;

	v.assign(42, 42);
	try
	{
		iterator = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *iterator << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	integerNotFound( void )
{
	std::vector<int>			v(42, -42);
	std::vector<int>::iterator	iterator;

	try
	{
		iterator = easyfind(v, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *iterator << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}
	return ;
}

void	oneSizedArrayFound( void )
{
	std::vector<int>			intArray(1, 42);
	std::vector<int>::iterator	iterator;

	try
	{
		iterator = easyfind(intArray, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *iterator << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}	
	return ;
}

void	oneSizedArrayNotFound( void )
{
	std::vector<int>			intArray(1, -42);
	std::vector<int>::iterator	iterator;

	try
	{
		iterator = easyfind(intArray, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *iterator << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}	
	return ;
}

void	emptyArray( void )
{
	std::vector<int>			emptyArray;
	std::vector<int>::iterator	iterator;

	try
	{
		iterator = easyfind(emptyArray, 42);
		SC(GRNCOLOR)std::cout << "Occurence : [" << *iterator << "] is found" << std::endl;EC
	}
	catch (const std::exception &e)
	{
		SC(REDCOLOR)std::cout << e.what() << std::endl;EC
	}	
	return ;
}

int main( void )
{
	integerFound();
	integerNotFound();
	oneSizedArrayFound();
	oneSizedArrayNotFound();
	emptyArray();
	return 0;
}