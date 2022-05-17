/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:16 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/17 12:33:52 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>

class Phonebook
{
	public :

	std::string const	add;
	std::string const	search;
	std::string const	exit;

	Phonebook(std::string p_add, std::string p_search, std::string p_exit);
	~Phonebook( void );


	private :

	std::string	tab[8];
	std::string	AddContact(std::string);

};

#endif