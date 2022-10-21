/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:25:32 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/21 15:20:02 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
: Form(target, 72, 45)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm &copy )
: Form(copy.getName(), 72, 45)
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm &rhs )
{
	RobotomyRequestForm	tmp(rhs);

	*this = tmp;
	return *this;
}

void		RobotomyRequestForm::executeForm( void ) const
{
	static int success = 2;

	SC(YELCOLOR)
	std::cout << "... ... ...Drilling noise... ... ..." << std::endl;
	EC
	if (success % 2 == 1)
	{
		SC(REDCOLOR)
		std::cerr << this->getName() << " can't be robotomized because it fail.." << std::endl;
		EC
		success = 2;
	}
	else
	{
		SC(GRNCOLOR)
		std::cout << this->getName() << " has been successfully robotomized, it has a 50% chance of working !" << std::endl;
		EC
		success = 1;
	}
	return ;
}