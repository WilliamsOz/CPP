/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:38:12 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/24 14:01:31 by wiozsert         ###   ########.fr       */
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

Zombie *newZombie( std::string heapZombie );
void	randomChump( std::string stackZombie );

#endif