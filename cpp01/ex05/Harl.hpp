/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:53:14 by wiozsert          #+#    #+#             */
/*   Updated: 2022/06/01 15:48:22 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl( void );
	~Harl( void );
	void complain( std::string level );

	private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

typedef struct	s_tab{
	std::string	level;
	void		(Harl::*f)();
}				t_tab;

#endif