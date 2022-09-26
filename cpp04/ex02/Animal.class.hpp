/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:59:39 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 18:49:32 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include "Animal.hpp"

class AAnimal
{
	public :

	AAnimal( void );
	AAnimal( const AAnimal &copy );
	virtual ~AAnimal( void );
	AAnimal &    operator=( AAnimal &rhs );
	const std::string &	getType( void ) const;
	virtual void makeSound( void ) const = 0;


	protected :

	std::string type;

};

std::ostream &	operator<<( std::ostream &o, AAnimal const &rhs );

#endif