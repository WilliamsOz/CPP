/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:41:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 16:37:33 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main (void)
{
	const Animal* meta = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << std::endl;

	std::cout << "Animal : " << meta->getType() << " make an ";
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << "Animal : " << j->getType() << " make an ";
	j->makeSound();
	std::cout << std::endl;

	std::cout << "Animal : " << i->getType() << " make an ";
	i->makeSound();
	std::cout << std::endl;

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;


	return (0);
}