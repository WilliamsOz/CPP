/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:57 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/27 17:40:38 by wiozsert         ###   ########.fr       */
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
	int	getGrade( void );
	void	levelUp( void );
	void	levelDown( void );

	private :
	const std::string _name;
	int	_grade;
	Exception	_e;

};

std::ostream &	operator<<(std::ostream &o, Bureaucrat &rhs );

#endif