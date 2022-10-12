/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:50:14 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/12 15:06:54 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void	pointerTest( int N )
{
	Base *base;

	std::cout << GRNCOLOR << "Below, the test with *PTR :" << ENDCOLOR <<std::endl;
	std::cout << "---------------------" << std::endl;
	for (int i = 0 ; i < N ; i++)
	{
		base = generate();
		identify(base);
		delete base;
	}
	std::cout << "---------------------" << std::endl;
	return ;
}

void	refTest( int N )
{
	Base	*base;

	std::cout << GRNCOLOR << "Below, the test with &REF :" << ENDCOLOR <<std::endl;
	std::cout << "---------------------" << std::endl;
	for (int i = 0 ; i < N ; i++)
	{
		base = generate();
		identify(*base);
		delete base;
	}
	std::cout << "---------------------" << std::endl;
	return ;
}

int main(void)
{
	int N = 10;

	// pointerTest(N);
	refTest(N);
	return (0);
}