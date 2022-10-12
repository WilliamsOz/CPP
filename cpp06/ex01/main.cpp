/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:49:40 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 14:13:41 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data	data;
	Data	*ptrData;
	uintptr_t	raw;

	data.data = 42;
	data.name = "Willy";
	std::cout << "Adresse of data is : |" << &data << "|"<< std::endl;
	std::cout << "value of data = " << data.data << std::endl;
	std::cout << "name : " << data.name << std::endl;

	raw = serialize(&data);

	std::cout << std::endl << "After serialize :" << std::endl;

	std::cout << "Adresse of data is : |" << &data << "|"<< std::endl;
	std::cout << "value of data = " << data.data << std::endl;
	std::cout << "name : " << data.name << std::endl;

	ptrData = deserialize(raw);

	std::cout << std::endl << "After deserialize :" << std::endl;
	std::cout << "Adresse of data is : |" << &data << "|"<< std::endl;
	std::cout << "value of data = " << data.data << std::endl;
	std::cout << "name : " << data.name << std::endl;
	return (0);
}