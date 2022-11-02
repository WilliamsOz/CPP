/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/02 23:20:33 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
	for (size_t i = 0; i < 40; i++)
	{
		randomNumber = rand();
		sp.addNumber(randomNumber);
	}
	sp.addNumber(42);
	sp.addNumber(42);
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
	sp.addIteratorRange(array);
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
	sp.addIteratorRange(array);
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
	// sp.longestSpan();
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
	return 0;
}