/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:41:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 09:06:00 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

int main (void)
{
	// const	Animal* meta = new Animal();
	const	Animal*	cat = new Cat();
	const	Animal*	dog = new Cat();

	std::cout << std::endl;

	delete cat;
	delete dog;
	return (0);
}