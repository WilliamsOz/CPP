/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:19:16 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/18 12:15:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

class ClapTrap
{
	public:

	ClapTrap( void );
	virtual ~ClapTrap();
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const &copy );
	ClapTrap &	operator=( ClapTrap &rhs );
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	protected:
	
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

#endif