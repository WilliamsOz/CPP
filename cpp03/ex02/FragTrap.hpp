/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:45:26 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/22 18:09:45 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	FragTrap();
	~FragTrap();
	FragTrap( std::string name );
	FragTrap( FragTrap const &copy );
	FragTrap &	operator=( FragTrap &rhs );	
	void		highFivesGuys(void);
	
	private:


};

#endif