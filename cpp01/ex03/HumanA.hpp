/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:12:10 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/25 13:23:11 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	Weapon;

class	HumanA
{
	public :
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack( void );


	private :
	std::string	_name;
	Weapon		&_weaponREF;
};

#endif