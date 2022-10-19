/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:18:27 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/19 12:42:57 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat( void );
	virtual ~WrongCat( void );
	WrongCat( const WrongCat &copy );
	WrongCat &	operator=( const WrongCat &rhs );
	void		makeSound( void ) const;

};

#endif