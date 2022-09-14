/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:42:48 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/14 18:33:09 by wiozsert         ###   ########.fr       */
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
#include <fcntl.h>
#include <unistd.h>
#include "Color.hpp"
#define PS(x) std::cout << x << std::endl;  //REMOVE


class	Sed
{
	public :
	Sed( void );
	~Sed( void );
	bool	validArguments( char *fileName ) const;
	void	createNewFile(char *fileName, char *from, char *to);

	private :
	bool	validFile(char *fileName) const;
};

#endif