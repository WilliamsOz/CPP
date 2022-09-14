/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willyiony <willyiony@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:10:15 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 11:40:03 by willyiony        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

class	Weapon
{
	public :

	Weapon( std::string type );
	~Weapon( void );
	const std::string	getType();
	void				setType(std::string type);


	private :

	std::string	_type;

};

#endif