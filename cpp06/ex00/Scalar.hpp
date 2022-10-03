/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:20:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/03 16:43:51 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include "Exception.hpp"
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

class Scalar
{

	public :

	/*------------------CONSTRUCTORS------------------*/
	Scalar( void );
	
	
	/*------------------DESTRUCTOR------------------*/
	~Scalar();

	/*------------------ACCESORS------------------*/
	/*------------------NESTED CLASS------------------*/
	
	/*------------------MEMBER FUNCTIONS------------------*/
	void	isThereAnError(int ac, char **av);
	bool	Error( int ac, char **av );
	Exception	ex;

};

#endif