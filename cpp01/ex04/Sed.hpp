/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:42:48 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/26 12:36:38 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sys/stat.h> // Get File Information
#include <ios>
#define PS(x) std::cout << x << std::endl;  
// #include <fcntl.h> //O_RDWR

bool	fileNameErrors(char *fileName);

class	Sed
{
	public :
	Sed( void );
	~Sed( void );
	bool	validArguments(char *fileName);


	private :
	
};

#endif