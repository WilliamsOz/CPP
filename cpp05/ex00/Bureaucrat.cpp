/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/27 17:50:32 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &rhs )
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

const std::string  Bureaucrat::getName( void )
{
	return this->_name;
}

int   Bureaucrat::getGrade( void )
{
	return this->_grade;
}

void  Bureaucrat::levelUp( void )
{
	try
	{
		if (this->_grade == 1)
			throw _e;
		this->_grade--;
		std::cout << GRNCOLOR << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade + 1 << " to " << this->_grade << std::endl;
	}
	catch (Exception &e)
	{
		std::cout << REDCOLOR << e.what() << ENDCOLOR << std::endl;
	}
	return ;
}

void  Bureaucrat::levelDown( void )
{
    this->_grade++;
    return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
