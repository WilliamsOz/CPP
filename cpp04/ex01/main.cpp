/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:41:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 11:43:53 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

void	animalBrainTest( void )
{
	const Animal *animalTab[10];

	for (int i = 0 ; i < 10 ; i++)
	{
		if (i % 2 == 0)
			animalTab[i] = new Cat();
		else
			animalTab[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0 ; i < 10 ; i++)
		std::cout << "Animal number " << i << " is a " << animalTab[i]->getType() << std::endl;
	std::cout << std::endl;
	for (int i = 0 ; i < 10 ; i++)
		delete animalTab[i];
	return ;
}

void	subjectTest( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	delete j;//should not create a leak
	delete i;
	return ;
}

void	ideasTest( void )
{
	Brain	*brain = new Brain();

	for (int i = 0 ; i < 100 ; i++)
	{
		if (i % 2 == 0)
			brain->_ideas[i] = "Hello";
		else
			brain->_ideas[i] = "GoodBye";
	}
	for (int i = 0 ; i < 100 ; i++)
		std::cout << brain->_ideas[i] << std::endl;
	delete brain;
	return ;
}

int main (void)
{
	// subjectTest();
	animalBrainTest();
	// ideasTest();
	return (0);
}