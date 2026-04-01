/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:13:24 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 19:34:30 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

int	main(void)
{
	std::string input;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "PhoneBook $> " << std::flush;
		getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (0);
		else if (input[0])
			std::cout << "Command not found, try ADD | SEARCH | EXIT\n";
	}
}
