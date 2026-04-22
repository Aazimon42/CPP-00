/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:58:08 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/22 15:06:11 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook (void);
		void	add(void);
		void	search(void);
};

#endif
