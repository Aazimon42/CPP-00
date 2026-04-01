/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:47:24 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 19:18:18 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
# define INCLUDES_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cctype>
# include "Contact.hpp"
# include "PhoneBook.hpp"

int			is_numeric(std::string s);
std::string	truncate(std::string s);

#endif
