/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:09:59 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 12:26:27 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	intTest( void )
{
	int		x = 42;
	int		y = 21;
	int		res;

	std::cout << GRNCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << MAGCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	std::cout << MAGCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << GRNCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;
	return ;
}

void	charTest( void )
{
	char		x = '.';
	char		y = '*';
	char		res;

	std::cout << GRNCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << MAGCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	std::cout << MAGCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << GRNCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;
	return ;
}

void	floatTest( void )
{
	float		x = 42.42f;
	float		y = 0.0f;
	float		res;

	std::cout << GRNCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << MAGCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	std::cout << MAGCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << GRNCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;
	return ;
}

void	boolTest( void )
{
	bool		x = true;
	bool		y = false;
	bool		res;

	std::cout << GRNCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << MAGCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	std::cout << MAGCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << GRNCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;
	return ;
}

void	doubleTest( void )
{
	double		x = 42.42;
	double		y = 0.0;
	double		res;

	std::cout << GRNCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << MAGCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	std::cout << MAGCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << GRNCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	res = min(x, y);
	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << res << ENDCOLOR << std::endl;

	res = max(x, y);
	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << res << ENDCOLOR << std::endl;
	return ;
}

void	stringTest( void )
{
	std::string x = "String2";
	std::string y = "String1";

	std::cout << GRNCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << MAGCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << ::min( x, y ) << ENDCOLOR << std::endl;

	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << ::max( x, y ) << ENDCOLOR << std::endl;

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	std::cout << MAGCOLOR << "I am x and my value is " << x << ENDCOLOR << std::endl;
	std::cout << GRNCOLOR << "I am y and my value is " << y << ENDCOLOR << std::endl << std::endl;

	std::cout << "Who is the min ? " << std::endl << MAGCOLOR << ::min( x, y ) << ENDCOLOR << std::endl;

	std::cout << "Who is the max ? " << std::endl << GRNCOLOR << ::max( x, y ) << ENDCOLOR << std::endl;
	return ;
}

void	subjectTest( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return ;
}

int main(void)
{
	subjectTest();
	// intTest();
	// charTest();
	// floatTest();
	// doubleTest();
	// boolTest();
	// stringTest();
	return 0;
}