/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:20:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/09 15:13:05 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <limits.h>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

//del
#include <stdio.h>
#define DEBUG printf(MAGCOLOR"%s\n","CCCNS"ENDCOLOR);
//del

class Convert
{
	char	_char;
	int		_int;
	float	_float;
	double	_double;
	bool	_isChar;
	bool	_isInt;
	bool	_isFloat;
	bool	_isDouble;
	bool	_isInfinityConv;
	bool	_isCharOverflow;
	bool	_isIntOverflow;

	public :

	Convert( void );
	Convert( Convert const &copy );
		
	
	Convert &	operator=( Convert const &rhs );
	
	~Convert();

	long	ft_stoi( const char *src ) const;

	void	printInt( void ) const;
	void	printChar( void ) const;
	void	print( void ) const;

	void	convertToChar( const char *src );
	void	convertToInt( const char *src );
	void	convertToFloat( const char *src );
	void	convertToDouble( const char *src );
	void	convert( const char *src );

	bool	isInfinityToConv( std::string const src );
	bool	isDouble(const char *src, int index);
	bool	isFloat(const char *src, int index);
	bool	isInt(const char *src, int index);
	void	detectCase( const char *src );

	void	isThereAnError(int ac, const char *src) const;
	bool	Error( int ac, const char **av ) const;


	bool	getIsChar( void );
	char	getChar( void );
	bool	getIsInt( void );
	int		getInt( void );
	bool	getIsFloat( void );
	float	getFloat( void );
	bool	getIsDouble( void );
	double	getDouble( void );

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
class	InvalidSense
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
	InvalidSense				invalidSense;

};

std::ostream &	operator<<( std::ostream &ios, Convert &rhs );

#endif