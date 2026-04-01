/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:58:40 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 18:51:11 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "includes.hpp"

class Contact {
	public:
	int	index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	secret;
	Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phone, std::string secret);
	Contact(void);
};

#endif
