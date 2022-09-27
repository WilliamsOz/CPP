/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:52:24 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/27 17:35:50 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_CLASS_HPP
#define EXCEPTION_CLASS_HPP

#include "Bureaucrat.hpp"

class Exception : public std::exception
{

	public :
	
	Exception( void );
	// ~Exception();
	virtual const char *	what( void ) const throw();
	

};

#endif