/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:09:04 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/24 14:41:54 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public :

	Zombie( std::string name );
	~Zombie( void );
	void 	announce( void );


	private :

	std::string	_name;

};

Zombie*	zombieHorde(int N, std::string name);

#endif