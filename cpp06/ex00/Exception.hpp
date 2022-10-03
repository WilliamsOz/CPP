/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:35:44 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/03 16:41:44 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "Scalar.hpp"

class Exception : std::exception
{
	public :

class InvalidNumberOfArguments
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Invalid numbers of arguments");
	}
};


    InvalidNumberOfArguments    invalidNumberOfArguments;

};

#endif