/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:56:32 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 09:44:29 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string heapZombieName )
{
	Zombie *heapZombie;

	heapZombie = new Zombie(heapZombieName);
	return (heapZombie);
}
