/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:06:03 by edi-maio          #+#    #+#             */
/*   Updated: 2026/03/28 18:26:48 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	this->index = 0;
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phone = "";
	this->secret = "";
}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phone, std::string secret)
{
	this->index = index;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phone = phone;
	this->secret = secret;
}
