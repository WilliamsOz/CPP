/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:10:29 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 09:36:11 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* 	Zombie::setNameToTheHorde(Zombie *horde, int N, std::string name) const
{
	int i = 0;

	while (i < N)
	{
		horde[i].setHordeName(name);
		i++;
	}
	return (horde);
}

void	Zombie::introduceYourselves(Zombie *horde, int N) const
{
	int	i = 0;

	while (i < N)
	{
		horde->announce();
		i++;
	}
	return ;
}

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	horde = setNameToTheHorde(horde, N, name);
	introduceYourselves(horde, N);
	return (horde);
}
