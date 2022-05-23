/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:16 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/23 09:49:25 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>

class PhoneBook
{
	public :

	std::string const	add;
	std::string const	search;
	std::string const	exit;

	PhoneBook(std::string p_add, std::string p_search, std::string p_exit);
	~PhoneBook( void );

	void	show_welcome_msg( void ) const;
	void	show_cmd( void ) const;
	void	print_unknow_cmd( void ) const;

	std::string	getUser( int index ) const;
	void		addUser(std::string new_user, int index);
	void		showUser();

	private :

	std::string	_tab_user[8];
};

#endif