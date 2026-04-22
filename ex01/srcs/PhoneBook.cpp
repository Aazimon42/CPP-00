/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:08:47 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/22 15:06:16 by edi-maio         ###   ########.fr       */
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
			<< std::setw(10) << contacts[i].getIndex() << "|" 
			<< std::setw(10) << truncate(contacts[i].getFirstName()) << "|" 
			<< std::setw(10) << truncate(contacts[i].getLastName()) << "|"
			<< std::setw(10) << truncate(contacts[i].getNickName())
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
				<< std::setw(10) << contacts[index].getIndex() << "|" 
				<< std::setw(10) << truncate(contacts[index].getFirstName()) << "|" 
				<< std::setw(10) << truncate(contacts[index].getLastName()) << "|"
				<< std::setw(10) << truncate(contacts[index].getNickName()) << "|"
				<< std::setw(10) << truncate(contacts[index].getPhone()) << "|"
				<< std::setw(10) << truncate(contacts[index].getSecret())
				<< std::endl;
		}
		else
			std::cout << "Index not found" << std::endl;
	}
	else
		std::cout << "Not a number" << std::endl;
}
