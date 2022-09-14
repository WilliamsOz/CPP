/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:09:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 09:36:14 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public :

	Zombie( void );
	~Zombie( void );
	void	announce( void ) const;
	void	setHordeName( std::string horde_name );
	Zombie*	zombieHorde(int N, std::string name);


	private :

	std::string	_name;
	Zombie*	setNameToTheHorde(Zombie *horde, int N, std::string name) const;
	void	introduceYourselves(Zombie *horde, int N) const;

};


#endif