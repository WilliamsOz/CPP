/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:54:06 by wiozsert          #+#    #+#             */
/*   Updated: 2022/10/27 10:55:37 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Convert.hpp"

size_t	ft_strlen(const char *src);
void	initList( error_t *ptr_list );
bool	isInfinityConversion( const std::string &src );
bool	ft_isChar( char c );
bool	ft_isDigit( char c );

#endif