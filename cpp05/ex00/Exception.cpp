/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:36:21 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/27 17:46:31 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Exception::Exception( void )
{
	std::cout << "Exception default constructor called" << std::endl;
	return ;
}

const char *	Exception::what( void ) const throw()
{
	return ("Exception : Higher rank already reached !");
}