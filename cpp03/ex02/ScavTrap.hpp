/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:51:03 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 10:38:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#define GATEKEEPER_MODE_ON 1
#define GATEKEEPER_MODE_OFF 0

class ScavTrap : public ClapTrap
{
	public:
	
	ScavTrap( void );
	~ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const &copy );
	ScavTrap &  operator=( ScavTrap &rhs );
	void		attack( const std::string& target );
	void		guardGate();

	private:
	
	static int	_status;

};

#endif