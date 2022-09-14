/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:38:55 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 08:00:28 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	introduceYourself( Zombie *heapZombie)
{
	heapZombie->announce();
	delete heapZombie;
	return ;
}

int main(void)
{
	randomChump("stackZombie");

	Zombie*	heapZombie;

	heapZombie = newZombie("heapZombie");
	introduceYourself(heapZombie);
	return (0);
}
