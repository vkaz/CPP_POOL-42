/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addcon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:33:24 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/01 14:33:25 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact addcon(void)
{
	Contact			new_contact;
	std::string		tmp;

	std::cout << "Enter your First Name :";
	std::cin >> tmp;
	new_contact.sfirtstName(tmp);
	std::cout << "Enter your Last Name :";
	std::cin >> tmp;
	new_contact.slastName(tmp);
	std::cout << "Enter your Nick Name :";
	std::cin >> tmp;
	new_contact.snickName(tmp);
	std::cout << "Enter your Login :";
	std::cin >> tmp;
	new_contact.slogin(tmp);
	std::cout << "Enter your Postal address :";
	std::cin >> tmp;
	new_contact.spost_ad(tmp);
	std::cout << "Enter your Email address :";
	std::cin >> tmp;
	new_contact.semail_ad(tmp);
	std::cout << "Enter your  Phone number, :";
	std::cin >> tmp;
	new_contact.sphone_numb(tmp);
	std::cout << "Enter your  Birthday date :";
	std::cin >> tmp;
	new_contact.sBirthday(tmp);
	std::cout << "Enter your  Favorite meal :";
	std::cin >> tmp;
	new_contact.sFavorite(tmp);
	std::cout << "Enter your  Underwear color :";
	std::cin >> tmp;
	new_contact.sUnderwear(tmp);
	std::cout << "Enter your  darkest secret :";
	std::cin >> tmp;
	new_contact.sDarkest_secret(tmp);

	return new_contact;
}
