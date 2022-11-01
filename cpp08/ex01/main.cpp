/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/11/01 20:57:22 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// void	subjectTest( void )
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return ;
// }

int main( void )
{
	try
	{
		Span	sp(10);
		// srand(time(NULL));
		std::vector<int>::iterator	it;

		sp.addNumber(1);
		sp.addNumber(10);
		sp.addNumber(8);
		std::cout << sp.shortestSpan() << std::endl;
		COLOR(MAG)std::cout << sp;ENDCOLOR
		// std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		COLOR(RED)std::cerr << e.what() << std::endl;ENDCOLOR
	}
	// subjectTest();
	//test avec 10000 nbr
	//test avec + de nbr possible
	return 0;
}