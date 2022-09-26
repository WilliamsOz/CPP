/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:57 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 19:51:23 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include "Bureaucrat.hpp"

class Bureaucrat
{

	public :

	Bureaucrat( std::string const name, int grade );
	~Bureaucrat();
	Bureaucrat( Bureaucrat const &copy );
	Bureaucrat & operator=( const Bureaucrat &rhs );
	const std::string	getName( void );
	const int	getGrade( void );
	const void	levelUp( void );
	const void	levelDown( void );

	private :
	const std::string _name;
	int	_grade;

};

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs );

#endif