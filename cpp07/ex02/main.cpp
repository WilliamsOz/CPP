/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:22:09 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/25 14:25:00 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#define MAX_VAL 750

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
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

template<typename U>
void	print(U *tab)
{
	std::cout << tab << std::endl;
}

template<typename T>
void	iter(T const &tab, unsigned long lenTab, void (*ptrFct)(const T))
{
	for (unsigned long i = 0 ; i < lenTab ; i++)
		ptrFct(&tab[i]);
}

int main( void )
{
	// subjectTest();
	try
	{
		Array<int>	tab(0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	

	// iter(&tab, sizeof(tab)/sizeof(tab[0]), &print);
	// for (size_t i = 0 ; i < tab.size() ; i++)
		// std::cout << tab[i] << std::endl;
	return 0;
}