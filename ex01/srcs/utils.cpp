/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:42:53 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 19:18:31 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	is_numeric(std::string s)
{
	int	i = 0;

	if (!s[0])
		return (0);
	while (s[i])
	{
		if (!isdigit((unsigned char)(s[0])))
			return (0);
		++i;
	}
	return (1);
}

std::string	truncate(std::string s)
{
	if (s.size() > 10)
	{
		return s.substr(0, 9) + ".";
	}
	return (s);
}
