/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:59:42 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 13:32:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

	void	tryInitForm( const int gradeRequiredToBeSigned, const int gradeRequiredToBeExecuted );
	Form( const std::string name, const int gradeRequiredToBeSigned,  const int gradeRequiredToBeExecuted);
	~Form();
	Form( Form const &copy );
	Form &	operator=( Form const &rhs );
	const std::string	getName( void );
	bool				getIsSigned( void );
	int			getGradeRequiredToBeSigned( void );
	int			getGradeRequiredToBeExecuted( void );
	void		tryToSign( Bureaucrat &name );
	void		beSigned( Bureaucrat &name );

	private :

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeRequiredToBeSigned;
	const int			_gradeRequiredToBeExecuted;
	Exception			_exception;
};

std::ostream &	operator<<(std::ostream &o, Form &rhs );

#endif