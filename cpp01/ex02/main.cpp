/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:00:58 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/24 16:08:58 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory address of the string variable is : " << "|" << &string << "|" << std::endl;
	std::cout << "The memory address held by stringPTR is : " << "|" << stringPTR << "|" << std::endl;
	std::cout << "The memory address held by stringREF is : " << "|" << &stringREF << "|" << std::endl;
	std::cout << std::endl;

	std::cout << "The value of the string variable is : " << "|" << string << "|" << std::endl;
	std::cout << "The value pointed to by stringPTR is : " << "|" << *stringPTR << "|" << std::endl;
	std::cout << "The value pointed to by stringREF is : " << "|" << stringREF << "|" << std::endl;
	

	return (0);
}