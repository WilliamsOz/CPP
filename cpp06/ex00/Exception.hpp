/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:35:44 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 00:05:37 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "Convert.hpp"

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
class EmptyString
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Empty argument");
	}
};
class InvalidCharacter
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Invalid character found");
	}
};
class NoSense
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Conversion doesn't make sense");
	}
};


    InvalidNumberOfArguments    invalidNumberOfArguments;
	EmptyString					emptyString;
	InvalidCharacter			invalidCharacter;
	NoSense						noSense;
};

#endif