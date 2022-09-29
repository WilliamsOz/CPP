/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:23:46 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/28 17:57:11 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( AForm form ) : AForm(form.getName(), 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm default destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm & copy )
: AForm(copy._target, 25, 5), _target(copy._target), _gradeRequiredToBeSigned(25), _gradeRequiredToBeExecuted(5)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm &rhs )
{
	std::cout << "PresidentialPardonForm Assignation constructor called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeRequiredToBeSigned = rhs._gradeRequiredToBeSigned;
		this->_gradeRequiredToBeExecuted = rhs._gradeRequiredToBeExecuted;
	}
	return *this;
}


