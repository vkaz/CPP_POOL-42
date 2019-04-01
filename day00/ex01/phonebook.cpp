/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:21:29 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/01 12:21:30 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		main(void)
{
	Contact		contact[8];
	int			index, i;
	std::string	name;

	index = 0;
	i = 0;
	while (1)
	{
		getline(std::cin, name);
		if (name == "EXIT")
			break ;
		else if (name == "ADD" && index < 7)
			contact[index++] = addcon();
		else if (name == "SEARCH")
		{
			if (index == 0)
				std::cout << "EROOR! Book is empty!";
			else
			{
				show(contact, index);
				std::cout << "Enter index: ";
				std::cin >> i;
				if (i < index )
					search(contact, i);
				else
					std::cout << "EROOR! Index bigger than numbers of users!";
			}
		}
	}
	return 0;
}