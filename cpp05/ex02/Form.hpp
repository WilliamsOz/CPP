/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:59:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:17:13 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form
{
	private :

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeRequiredToBeSigned;
	const int			_gradeRequiredToBeExecuted;
	virtual void		executeForm( void ) const = 0;


	public :

	/*------------------CONSTRUCTORS------------------*/
	Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted);
	Form( Form const &copy );
	Form &	operator=( Form const &rhs );


	/*------------------DESTRUCTOR------------------*/
	virtual ~Form();


	/*------------------ACCESORS------------------*/
	const std::string	getName( void ) const;
	bool				getIsSigned( void ) const;
	int					getGradeRequiredToBeSigned( void ) const;
	int					getGradeRequiredToBeExecuted( void ) const;
	void				beSigned( Bureaucrat &name );


	/*------------------MEMBER FUNCTIONS------------------*/
	void				execute( Bureaucrat const &executor ) const;


	/*------------------NESTED CLASS------------------*/
class GradeTooHighException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("grade too high !");
	}
};
class GradeTooLowException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("grade too low !");
	}
};
class NotSignedException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("form is not signed !");
	}
};

	GradeTooHighException	gradeTooHigh;
	GradeTooLowException	gradeTooLow;
	NotSignedException		notSigned;
};

std::ostream &	operator<<(std::ostream &o, Form &rhs );

#endif