/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:18:27 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/12 12:05:44 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP

#include "Animal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat( void );
	virtual ~WrongCat( void );
	WrongCat( const WrongCat &copy );
	WrongCat &  operator=( const WrongCat &rhs );
	void    makeSound( void ) const;

};

#endif