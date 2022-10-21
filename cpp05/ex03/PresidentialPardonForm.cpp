/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:31:03 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 15:20:12 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string target )
: Form(target, 25, 5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm &copy )
: Form(copy.getName(), 25, 5)
{
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm &rhs )
{
	PresidentialPardonForm	tmp(rhs);

	*this = tmp;
	return *this;
}

void		PresidentialPardonForm::executeForm( void ) const
{
	SC(GRNCOLOR)
	std::cout << this->getName() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	EC
	return ;
}