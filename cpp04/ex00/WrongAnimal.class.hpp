/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:29:01 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 22:50:46 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP

#include "Polymorphism.hpp"

class WrongAnimal
{
	public :

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &copy );
	virtual ~WrongAnimal( void );
	WrongAnimal &		operator=( WrongAnimal &rhs );
	const std::string &	getType( void ) const;
	void				makeSound( void ) const;


	protected :

	std::string type;

};

#endif