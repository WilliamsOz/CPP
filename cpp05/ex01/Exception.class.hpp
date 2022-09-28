/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:52:24 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 10:19:17 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_CLASS_HPP
#define EXCEPTION_CLASS_HPP

#include "Bureaucrat.hpp"

class Exception : public std::exception
{
	public:
	
	Exception( void );

	class GradeTooHighException
	{

	public :
	virtual  const char *	what() const throw()
	{
		return ("Exception : grade too high !");
	}
	};

	class GradeTooLowException
	{

	public :
	virtual  const char *	what() const throw()
	{
		return ("Exception : grade too low !");
	}
	};
	GradeTooHighException		gradeTooHighException;
	GradeTooLowException		gradeTooLowException;

};

#endif