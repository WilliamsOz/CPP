/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:51:59 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(150)
{
	try
	{
		if (grade < 1)
			throw gradeTooHigh;
	else if (grade > 150)
		throw gradeTooLow;
	}
	catch(const GradeTooHighException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
		return ;
	}
	catch(const GradeTooLowException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
		SC(YELCOLOR)
		std::cout << "By default the grade will be 150" << std::endl;
		EC
		return ;
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy )
: _name(copy._name), _grade(copy._grade)
{
	return ;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}

const std::string  Bureaucrat::getName( void ) const
{
	return this->_name;
}

int   Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void  Bureaucrat::levelUp( void )
{
	try
	{
		if (this->_grade == 1)
			throw gradeTooHigh;
		this->_grade--;
		SC(GRNCOLOR)
		std::cout << this->_name << "'s rank has been successfully increase from "
		<<  this->_grade + 1 << " to " << this->_grade << std::endl;
		EC
	}
	catch (const GradeTooHighException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooHigh.what() << std::endl;
		EC
	}
	catch (const GradeTooLowException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
	}
	return ;
}

void  Bureaucrat::levelDown( void )
{
	try
	{
		if (this->_grade == 150)
			throw gradeTooLow;
		this->_grade++;
		SC(GRNCOLOR)
		std::cout << this->_name
		<< "'s rank has been successfully increase from "
		<<  this->_grade - 1 << " to " << this->_grade << std::endl;
		EC
	}
	catch (GradeTooLowException &e)
	{
		SC(REDCOLOR)
		std::cerr << gradeTooLow.what() << std::endl;
		EC
	}
	return ;
}
