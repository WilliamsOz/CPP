/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:53:14 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/15 11:07:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[1;32m"

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