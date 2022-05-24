/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:38:55 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/24 14:07:56 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("stackZombie");

	Zombie*	heapZombie;
	heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
