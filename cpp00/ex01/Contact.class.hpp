/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:53:27 by wiozsert          #+#    #+#             */
/*   Updated: 2022/05/26 15:47:54 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#define TRUE 0
#define FALSE 1
#define FIRST_NAME 0
#define LAST_NAME 1
#define NICKNAME 2
#define PHONE_NUMBER 3
#define DARKEST_SECRET 4

void	printSummary(std::string _tab_contact[8][5]);

class Contact
{
	public :

	int			ft_stoi( std::string str ) const;
	void		addContact(std::string new_user, int index);
	void		showContact(PhoneBook phonebook);
	bool		is_index(std::string num) const;
	bool		only_number(std::string str) const;
	std::string	get_last_name( std::string dest );
	std::string	get_nickname( std::string dest );
	std::string	get_phone_number( std::string dest );
	std::string	get_darkest_secret( std::string dest );

	private :

	std::string	_tab_contact[8][5];
};

#endif