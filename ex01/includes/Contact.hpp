/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:58:40 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/21 14:56:03 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	private:
		int	index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phone;
		std::string	secret;
	public:
		Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phone, std::string secret);
		Contact(void);
		int getIndex(void) const;
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhone(void) const;
		std::string getSecret(void) const;
};

#endif
