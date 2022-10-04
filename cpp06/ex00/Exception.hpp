/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:35:44 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/04 09:46:42 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "Convert.hpp"

class	Exception : std::exception
{
	public :

class	InvalidNumberOfArguments
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Invalid numbers of arguments");
	}
};
class	EmptyString
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Empty argument");
	}
};
class	InvalidCharacter
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Invalid character found");
	}
};
class	NoSense
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Conversion doesn't make sense");
	}
};
class	Overflow
{
	public :
	virtual  const char *	what() const throw()
	{
		return ("Overflow detected");
	}
};


    InvalidNumberOfArguments    invalidNumberOfArguments;
	EmptyString					emptyString;
	InvalidCharacter			invalidCharacter;
	NoSense						noSense;
	Overflow					overflow;
};

#endif