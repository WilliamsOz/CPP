/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:57 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 13:39:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include "Bureaucrat.hpp"

class Form;

class Bureaucrat
{

	public :

	void				tryInitBureaucrat( int grade);
	Bureaucrat( const std::string name, int grade );
	~Bureaucrat();
	Bureaucrat( Bureaucrat const &copy );
	Bureaucrat &	operator=( Bureaucrat const &rhs );

	const std::string	getName( void );
	int					getGrade( void );
	void				levelUp( void );
	void				levelDown( void );
	void				signForm( Form &form );

	private :
	const std::string	_name;
	int					_grade;
	Exception 			_exception;
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs );

#endif