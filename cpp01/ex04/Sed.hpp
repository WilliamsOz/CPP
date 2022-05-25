/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:42:48 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/25 18:07:15 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#define FALSE //0 //c'est l'inverse
#define TRUE //1

bool	fileNameErrors(char *fileName);

class	Sed
{
	public :
	Sed( void );
	~Sed( void );
	bool	argumentErrors(char *fileName, char *from, char *to);


	private :
	
};

#endif