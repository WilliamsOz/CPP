/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:41:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 18:45:59 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	basicTest( void )
{
	const Animal* meta = new Cat();
	const Animal* j = new Dog();
	std::cout << std::endl;
	delete meta;
	delete j;
	return ;
}

void	arrayTest( void )
{
	const Animal	*PetShop[10];

	for (int i = 0 ; i < 10 ; i++)
	{
		if (i % 2 == 0)
			PetShop[i] = new Dog();
		else
			PetShop[i] = new Cat();
	}
	for (int i = 0 ; i < 10 ; i++)
		delete PetShop[i];
	return ;
}

void	animalBrainTest( void )
{
	Cat *Kitty = new Cat;
	Dog *Doggy = new Dog;
	std::string	temp;

	std::cout << std::endl;

	for (int i = 0 ; i < 3 ; i++)
	{
		Kitty->setIdeas( "I have many ideas !!\n", i);
		std::cout << MAGCOLOR << "I am a " << Kitty->getType() << " and, ";
		std::cout << Kitty->getIdeas(i) << ENDCOLOR;
	}

	for (int i = 0 ; i < 3 ; i++)
	{
		Doggy->setIdeas( "I have no ideas ...\n", i);
		std::cout << CYANCOLOR << "I am a " << Doggy->getType() << " and, ";
		std::cout << Doggy->getIdeas(i) << ENDCOLOR;
	}
	
	std::cout << std::endl;
	
	temp = Kitty->getIdeas(0);

	for (int i = 0 ; i < 3 ; i++)
		Kitty->setIdeas(Doggy->getIdeas(i), i);

	for (int i = 0; i < 3 ; i++)
		Doggy->setIdeas(temp, i);

	for (int i = 0 ; i < 3 ; i++)
	{
		std::cout << MAGCOLOR << "I am a " << Kitty->getType() << " and, ";
		std::cout << Kitty->getIdeas(i) << ENDCOLOR;
	}

	for (int i = 0 ; i < 3 ; i++)
	{
		std::cout << CYANCOLOR << "I am a " << Doggy->getType() << " and, ";
		std::cout << Doggy->getIdeas(i) << ENDCOLOR;
	}

	std::cout << std::endl;

	delete Kitty;
	delete Doggy;
	return ;
}

int main (void)
{
	// basicTest();
	// arrayTest();
	animalBrainTest();
	return (0);
}