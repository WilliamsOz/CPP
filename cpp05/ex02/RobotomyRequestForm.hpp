/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:19:35 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 16:32:49 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	public :
	
	/*------------------CONSTRUCTORS------------------*/
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( RobotomyRequestForm &copy );
	RobotomyRequestForm & operator=( RobotomyRequestForm &rhs );

	/*------------------DESTRUCTOR------------------*/
	virtual ~RobotomyRequestForm( void );


	/*------------------MEMBER FUNCTIONS------------------*/
	void				tryToRobotomize( int *ptr_success ) const;
	virtual void		execute(Bureaucrat const & executor) const;


	private :

	std::string			_target;
	int			_gradeRequiredToBeSigned;
	int			_gradeRequiredToBeExecuted;

};

#endif