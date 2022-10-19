/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:41:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 22:50:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

void	tryDog( void )
{
	const Animal* j = new Dog();


	std::cout << "Animal : " << j->getType() << " make an ";
	j->makeSound();
	delete j;
	return ;
}

void	tryCat( void )
{
	const Animal* meta = new Cat();

	std::cout << "Animal : " << meta->getType() << " make an ";
	meta->makeSound();
	delete meta;
	return ;
}

void	tryAnimal( void )
{
	const Animal* i = new Animal();

	std::cout << "Animal : " << i->getType() << " make an ";
	i->makeSound();
	delete i;
	return ;
}

void	tryWrongAnimal( void )
{
	const WrongAnimal* wrongAnimal = new WrongCat();

	std::cout << "Animal : " << wrongAnimal->getType() << " make an ";
	wrongAnimal->makeSound();
	delete wrongAnimal;
	return ;
}

int main (void)
{
	tryAnimal();
	std::cout << std::endl;
	tryDog();
	std::cout << std::endl;
	tryCat();
	std::cout << std::endl;
	tryWrongAnimal();
	return (0);
}