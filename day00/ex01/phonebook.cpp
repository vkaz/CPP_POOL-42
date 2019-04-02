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

Contact addcon(void)
{
	Contact			new_contact;
	std::string		tmp;

	std::cout << "Enter your First Name : ";
	std::cin >> tmp;
	new_contact.sfirtstName(tmp);
	std::cout << "Enter your Last Name : ";
	std::cin >> tmp;
	new_contact.slastName(tmp);
	std::cout << "Enter your Nick Name : ";
	std::cin >> tmp;
	new_contact.snickName(tmp);
	std::cout << "Enter your Login : ";
	std::cin >> tmp;
	new_contact.slogin(tmp);
	std::cout << "Enter your Postal address : ";
	std::cin >> tmp;
	new_contact.spost_ad(tmp);
	std::cout << "Enter your Email address : ";
	std::cin >> tmp;
	new_contact.semail_ad(tmp);
	std::cout << "Enter your  Phone number : ";
	std::cin >> tmp;
	new_contact.sphone_numb(tmp);
	std::cout << "Enter your  Birthday date : ";
	std::cin >> tmp;
	new_contact.sBirthday(tmp);
	std::cout << "Enter your  Favorite meal : ";
	std::cin >> tmp;
	new_contact.sFavorite(tmp);
	std::cout << "Enter your  Underwear color : ";
	std::cin >> tmp;
	new_contact.sUnderwear(tmp);
	std::cout << "Enter your  darkest secret : ";
	std::cin >> tmp;
	new_contact.sDarkest_secret(tmp);

	return new_contact;
}

void	search(Contact book[], int index)
{
	std::cout << "FIRST NAME : " << book[index].gfirtstName() <<std::endl;
	std::cout << "LAST NAME : " << book[index].glastName() <<std::endl;
	std::cout << "NICKNAME : " << book[index].gnickName() <<std::endl;
	std::cout << "LOGIN : " << book[index].glogin() <<std::endl;
	std::cout << "POSTAL : " << book[index].gpost_ad() <<std::endl;
	std::cout << "EMAIL : " << book[index].gemail_ad() <<std::endl;
	std::cout << "PHONE : " << book[index].gphone_numb() <<std::endl;
	std::cout << "BIRTHDAY : " << book[index].gBirthday() <<std::endl;
	std::cout << "FAVORITE MEAL : " << book[index].gFavorite() <<std::endl;
	std::cout << "UNDERWEAR COLOR : " << book[index].gUnderwear() <<std::endl;
	std::cout << "DARKEST SECRET : " << book[index].gDarkest_secret() <<std::endl;
}

std::string  truncate(std::string str)
{
	unsigned int i = 9;
	str = str.erase(9, str.length() - i);
	str.append(".");
	return (str);
}

void 	show(Contact book[], int index)
{
	std::string		name;
	std::string		sname;
	std::string		nname;

	std::cout << "|     INDEX|FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	for (int i = 0; i < index; i++)
	{
		name = book[i].gfirtstName();
		sname = book[i].glastName();
		nname = book[i].gnickName();
		if (name.length() > 9)
			name = truncate(name);
		if (sname.length() > 9)
			sname = truncate(sname);
		if (nname.length() > 9)
			nname = truncate(nname);
		std::cout << std::setw(10) << i;
		std::cout << std::setw(12) << name;
		std::cout << std::setw(11) << sname;
		std::cout << std::setw(11) << nname;
		std::cout << std::endl;
	}
}

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
		else if (name == "ADD")
		{
			if (index < 8)
				contact[index++] = addcon();
			else
				std::cout << "Already phonebook is full!" << std::endl;
		}
		else if (name == "SEARCH")
		{
			if (index == 0)
				std::cout << "EROOR! Book is empty!";
			else
			{
				show(contact, index);
				std::cout << "Enter index: ";
				std::cin >> i;
				if (std::cin.good())
				{
					if (i < index && i >= 0)
						search(contact, i);
					else
						std::cout << "EROOR! Index bigger than numbers of users!" << std::endl;
				}
				else
				{
					std::cout << "It's not a number!" << std::endl;
					std::cin.clear();
				}
			}
		}
	}
	return 0;
}