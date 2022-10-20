/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/20 15:04:00 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	levelTooLowToSign( void )
{
	Bureaucrat	Willy("Willy", 2);
	Form	form("Form #1", 1, 1);

	std::cout << form;
	form.beSigned( Willy );
	std::cout << form;
	return ;
}

void	levelUpToSign( void )
{
	Bureaucrat	Willy("Willy", 15);
	Form	form("Form #1", 1, 1);

	std::cout << form;
	SC(MAGCOLOR)
	std::cout << Willy;
	EC
	form.beSigned( Willy );
	while (Willy.getGrade() > form.getGradeRequiredToBeSigned())
		Willy.levelUp();
	form.beSigned( Willy );
	std::cout << form;

	return ;
}

void	canSign( void )
{
	Bureaucrat	Willy("Willy", 1);
	Form	form("Form #1", 1, 1);
	
	std::cout << form;
	form.beSigned( Willy );
	std::cout << form;
	return ;
}

int main(void)
{
	// levelTooLowToSign();
	levelUpToSign();
	// canSign();
	return (0);
}