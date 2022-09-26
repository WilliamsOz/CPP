/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:29:01 by wiozsert          #+#    #+#             */
/*   Updated: 2022/09/26 17:45:21 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP

#include "Animal.hpp"

class WrongAnimal
{
	public :

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &copy );
	virtual ~WrongAnimal( void );
	WrongAnimal &    operator=( WrongAnimal &rhs );
	const std::string &	getType( void ) const;
	virtual void makeSound( void ) const;


	protected :

	std::string type;

};



#endif