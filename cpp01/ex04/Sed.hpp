/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:42:48 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/10 13:28:15 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sys/stat.h>
#include <ios>
#include <fcntl.h>
#include <unistd.h>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"


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