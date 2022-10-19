/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:43:09 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 12:50:33 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define BLUECOLOR "\033[1;34m"
#define MAGCOLOR "\033[1;35m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"
#define SC(x) std::cout<<x;
#define EC std::cout<<ENDCOLOR;

class Animal
{
	public :

	Animal( void );
	Animal( const Animal &copy );
	virtual ~Animal( void );
	Animal &			operator=( Animal &rhs );
	const std::string &	getType( void ) const;
	virtual void 		makeSound( void ) const;


	protected :

	std::string type;

};

std::ostream &	operator<<( std::ostream &o, Animal const &rhs );

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#endif