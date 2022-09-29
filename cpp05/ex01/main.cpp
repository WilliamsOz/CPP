/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:25:19 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/29 10:22:00 by wiozsert         ###   ########.fr       */
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
	Bureaucrat	Willy("Willy", 2);
	Form	form("Form #1", 1, 1);

	std::cout << form;
	form.beSigned( Willy );
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
	// levelUpToSign();
	canSign();

	return (0);
}