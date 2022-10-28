/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:09:59 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/28 10:57:29 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	intTest( void )
{
	int		x = 42;
	int		y = 21;
	int		res;

	SC(GRNCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(MAGCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	SC(MAGCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(GRNCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC
	return ;
}

void	charTest( void )
{
	char		x = '.';
	char		y = '*';
	char		res;

	SC(GRNCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(MAGCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	SC(MAGCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(GRNCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC
	return ;
}

void	floatTest( void )
{
	float		x = 42.42f;
	float		y = 0.0f;
	float		res;

	SC(GRNCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(MAGCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	SC(MAGCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(GRNCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC
	return ;
}

void	boolTest( void )
{
	bool		x = true;
	bool		y = false;
	bool		res;

	SC(GRNCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(MAGCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	SC(MAGCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(GRNCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC
	return ;
}

void	doubleTest( void )
{
	double		x = 42.42;
	double		y = 0.0;
	double		res;

	SC(GRNCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(MAGCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	SC(MAGCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(GRNCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	res = min(x, y);
	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << res << std::endl;EC

	res = max(x, y);
	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << res << std::endl;EC
	return ;
}

void	stringTest( void )
{
	std::string x = "String2";
	std::string y = "String1";

	SC(GRNCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(MAGCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << ::min( x, y ) << std::endl;EC

	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << ::max( x, y ) << std::endl;EC

	std::cout << "----------SWAP----------" << std::endl;
	swap(x, y);
	SC(MAGCOLOR)std::cout << "I am x and my value is " << x << std::endl;EC
	SC(GRNCOLOR)std::cout << "I am y and my value is " << y << std::endl << std::endl;EC

	SC(MAGCOLOR)std::cout << "Who is the min ? " << std::endl << ::min( x, y ) << std::endl;EC

	SC(GRNCOLOR)std::cout << "Who is the max ? " << std::endl << ::max( x, y ) << std::endl;EC
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