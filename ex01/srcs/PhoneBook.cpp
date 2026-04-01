/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:08:47 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 19:34:40 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::add(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;

	while (!firstName[0])
	{
		std::cout << "First name: " << std::flush;
		getline(std::cin, firstName);
	}
	while (!lastName[0])
	{
		std::cout << "Last name: " << std::flush;
		getline(std::cin, lastName);
	}
	while (!nickName[0])
	{
		std::cout << "Nickname: " << std::flush;
		getline(std::cin, nickName);
	}
	while (!phoneNumber[0])
	{
		std::cout << "Phone number: " << std::flush;
		getline(std::cin, phoneNumber);
	}
	while (!secret[0])
	{
		std::cout << "Darkest secret: " << std::flush;
		getline(std::cin, secret);
	}
	contacts[index % 8] = Contact(index % 8, firstName, lastName, nickName, phoneNumber, secret);
	index++;
}

void	PhoneBook::search(void)
{
	int			i;
	std::string	str;
	int			index;

	if (this->index == 0)
	{
		std::cout << "No contact registered" << std::endl;
		return ;
	}
	std::cout << std::setfill(' ') << std::right 
		<< std::setw(10) << "index" << "|" 
		<< std::setw(10) << "first name" << "|" 
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname"
		<< std::endl;
	i = 0;
	while ((this->index > 7 && i < 8) || i < this->index % 8)
	{
		std::cout << std::setfill(' ') << std::right 
			<< std::setw(10) << contacts[i].index << "|" 
			<< std::setw(10) << truncate(contacts[i].firstName) << "|" 
			<< std::setw(10) << truncate(contacts[i].lastName) << "|"
			<< std::setw(10) << truncate(contacts[i].nickName)
			<< std::endl;
		i++;
	}
	std::cout << "Index to search: " << std::flush;
	getline(std::cin, str);
	if (is_numeric(str))
	{
		index = std::atoi(str.c_str());
		if (index < this->index && index < 8)
		{
			std::cout << std::setfill(' ') << std::right 
				<< std::setw(10) << "index" << "|" 
				<< std::setw(10) << "first name" << "|" 
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << "|"
				<< std::setw(10) << "phone nbr" << "|"
				<< std::setw(10) << "secret"
				<< std::endl;
			std::cout << std::setfill(' ') << std::right 
				<< std::setw(10) << contacts[index].index << "|" 
				<< std::setw(10) << truncate(contacts[index].firstName) << "|" 
				<< std::setw(10) << truncate(contacts[index].lastName) << "|"
				<< std::setw(10) << truncate(contacts[index].nickName) << "|"
				<< std::setw(10) << truncate(contacts[index].phone) << "|"
				<< std::setw(10) << truncate(contacts[index].secret)
				<< std::endl;
		}
		else
			std::cout << "Index not found" << std::endl;
	}
	else
		std::cout << "Not a number" << std::endl;
}
