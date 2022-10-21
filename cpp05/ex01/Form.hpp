/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:59:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 16:53:30 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

	/*------------------CONSTRUCTORS------------------*/
	Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted);
	Form( Form const &copy );
	Form &	operator=( Form const &rhs );


	/*------------------DESTRUCTOR------------------*/
	~Form();


	/*------------------ACCESORS------------------*/
	const std::string	getName( void ) const;
	bool				getIsSigned( void ) const;
	int					getGradeRequiredToBeSigned( void ) const;
	int					getGradeRequiredToBeExecuted( void ) const;
	void				beSigned( Bureaucrat &name );


	/*------------------MEMBER FUNCTIONS------------------*/


	/*------------------NESTED CLASS------------------*/
class GradeTooHighException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("Exception : grade too high !");
	}
};
	
class GradeTooLowException : public std::exception
{

	public :
	virtual  const char *	what() const throw()
	{
		return ("Exception : grade too low !");
	}
};

	GradeTooHighException	gradeTooHigh;
	GradeTooLowException	gradeTooLow;


	private :

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeRequiredToBeSigned;
	const int			_gradeRequiredToBeExecuted;
};

std::ostream &	operator<<(std::ostream &o, Form &rhs );

#endif