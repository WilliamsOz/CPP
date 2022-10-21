/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:25:34 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 15:10:10 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{

	public :

	/*------------------CONSTRUCTORS------------------*/
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( RobotomyRequestForm &copy );
	RobotomyRequestForm & operator=( RobotomyRequestForm &rhs );

	/*------------------DESTRUCTOR------------------*/
	virtual ~RobotomyRequestForm();


	/*------------------MEMBER FUNCTIONS------------------*/
	void		executeForm( void ) const;
};

#endif