/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/02 15:31:41 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	printArray(std::vector<unsigned int>	array)
{
	for (std::vector<unsigned int>::iterator	it = array.begin() ; it < array.end() ; it++)
	{
		std::cout << *it << std::endl;
	}
	return ;
}

void	subjectTest( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return ;
}

void	littleSizeTest( void )
{
	Span	sp(42);
	int		randomNumber;

	srand(time(NULL));
	for (size_t i = 0; i < 42; i++)
	{
		randomNumber = rand();
		sp.addNumber(randomNumber);
	}
	std::vector<unsigned int>	copy = sp.getArray();
	std::sort(copy.begin(), copy.end());
	// printArray(copy);
	std::cout << std::endl;
	COLOR(MAG)std::cout << "Shortest Span is |" << sp.shortestSpan() << "|" << std::endl;ENDCOLOR
	COLOR(GRN)std::cout << "Longest Span is |" << sp.longestSpan() << "|" << std::endl;ENDCOLOR
	return ;
}

void	mediumSizeTest( void )
{
	Span	sp(10000);
	int		randomNumber;

	srand(time(NULL));
	for (size_t i = 0; i < 10000; i++)
	{
		randomNumber = rand();
		sp.addNumber(randomNumber);
	}
	std::vector<unsigned int>	copy = sp.getArray();
	std::sort(copy.begin(), copy.end());
	// printArray(copy);
	COLOR(MAG)std::cout << "Shortest Span is |" << sp.shortestSpan() << "|" << std::endl;ENDCOLOR
	COLOR(GRN)std::cout << "Longest Span is |" << sp.longestSpan() << "|" << std::endl;ENDCOLOR
	return ;
}

void	bigSizeTest( void )
{
	Span						sp(100000);
	std::vector<unsigned int>	array;

	srand(time(NULL));
	for (size_t i = 0 ; i < 100000 ; i++)
	{
		array.push_back(rand());
	}
	// printArray(array);
	sp.addIteratorRange(sp.getPosition(0), array);
	COLOR(MAG)std::cout << "Shortest Span is |" << sp.shortestSpan() << "|" << std::endl;ENDCOLOR
	COLOR(GRN)std::cout << "Longest Span is |" << sp.longestSpan() << "|" << std::endl;ENDCOLOR
	return ;
}

void	hugeSizeTest( void )
{
	Span						sp(1000000);
	std::vector<unsigned int>	array;

	srand(time(NULL));
	for (size_t i = 0 ; i < 1000000 ; i++)
	{
		array.push_back(rand());
	}
	// printArray(array);
	sp.addIteratorRange(sp.getPosition(0), array);
	COLOR(MAG)std::cout << "Shortest Span is |" << sp.shortestSpan() << "|" << std::endl;ENDCOLOR
	COLOR(GRN)std::cout << "Longest Span is |" << sp.longestSpan() << "|" << std::endl;ENDCOLOR
	return ;
}

void	zeroSizedArray( void )
{
	Span	sp(0);

	sp.addNumber(42);
	return ;
}

void	oneSizedArray( void )
{
	Span	sp(1);

	sp.addNumber(42);
	sp.shortestSpan();
	return ;
}

void	invalidTest( void )
{
	// zeroSizedArray();
	// oneSizedArray();
	
	return ;
}

int main( void )
{
	try
	{
		// subjectTest();
		// littleSizeTest();
		// mediumSizeTest();
		// bigSizeTest();
		// hugeSizeTest();
		invalidTest();
	}
	catch(const std::exception& e)
	{
		COLOR(RED)std::cerr << e.what() << std::endl;ENDCOLOR
	}
	//test avec 10000 nbr
	//test avec + de nbr possible
	return 0;
}