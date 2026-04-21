/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:06:03 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/21 14:56:24 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

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

int Contact::getIndex(void) const
{
	return this->index;
}

std::string Contact::getFirstName(void) const
{
	return this->firstName;
}

std::string Contact::getLastName(void) const
{
	return this->lastName;
}

std::string Contact::getNickName(void) const
{
	return this->nickName;
}

std::string Contact::getPhone(void) const
{
	return this->phone;
}

std::string Contact::getSecret(void) const
{
	return this->secret;
}
