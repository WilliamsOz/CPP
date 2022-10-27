/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:22:09 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 12:07:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#define MAX_VAL 10

template<typename T>
void	print( Array<T> &tab )
{
	for (int i = 0 ; i < tab.size() ; i ++)
		std::cout << tab[i] << std::endl;
	return ;
}

int	subjectTest( void )
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		SC(REDCOLOR)std::cerr << e.what() << std::endl;EC
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		SC(REDCOLOR)std::cerr << e.what() << std::endl;EC
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

void	integerArrayTest( void )
{
	try
	{
		Array<int>	tab(10);
		tab[0] = 42;
		tab[9] = 42;
		SC(GRNCOLOR)std::cout << "Value of tab are :" << std::endl;EC
		SC(MAGCOLOR)print<int>(tab);EC

		Array<int>	copy = tab;
		SC(GRNCOLOR)std::cout << "Value of copyTab are :" << std::endl;EC
		SC(MAGCOLOR)print<int>(copy);EC

		Array<int>	assCopy(tab);
		SC(GRNCOLOR)std::cout << "Value of assignementTab are :" << std::endl;EC
		SC(MAGCOLOR)print<int>(assCopy);EC

		SC(GRNCOLOR)std::cout << "Value of tab are :" << std::endl;EC
		SC(MAGCOLOR)print<int>(tab);EC
	}
	catch(const std::exception& e)
	{
		SC(REDCOLOR)std::cerr << e.what() << std::endl;EC
	}
	return ;
}

void	negativeNumberToUnsignedIntContructor( void )
{
	try
	{
		Array<int> arr(-1);
	}
	catch(const std::exception& e)
	{
		SC(REDCOLOR)std::cerr << e.what() << std::endl;EC
	}
	return ;
}

void	emptyTab( void )
{
	Array<int>	tab;

	print(tab);
	return ;
}

void	negativeIndex( void )
{
	try
	{
		Array<int>	tab(10);
		std::cout << tab[-1] << std::endl;
		std::cout << tab[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		SC(REDCOLOR)std::cerr << e.what() << std::endl;EC
	}
	return ;
}

void	indexTooHigh( void )
{
	try
	{
		Array<int>	tab(10);
		std::cout << tab[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		SC(REDCOLOR)std::cerr << e.what() << std::endl;EC
	}
	return ;
}

int main( void )
{
	subjectTest();
	// emptyTab();
	// integerArrayTest();
	// negativeNumberToUnsignedIntContructor();
	// negativeIndex();
	// indexTooHigh();
	return 0;
}