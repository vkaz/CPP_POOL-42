/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:29:52 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/01 16:29:54 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	search(Contact book[], int index)
{
	std::cout << book[index].gfirtstName() <<std::endl;
	std::cout << book[index].glastName() <<std::endl;
	std::cout << book[index].gnickName() <<std::endl;
	std::cout << book[index].glogin() <<std::endl;
	std::cout << book[index].gpost_ad() <<std::endl;
	std::cout << book[index].gemail_ad() <<std::endl;
	std::cout << book[index].gphone_numb() <<std::endl;
	std::cout << book[index].gBirthday() <<std::endl;
	std::cout << book[index].gFavorite() <<std::endl;
	std::cout << book[index].gUnderwear() <<std::endl;
	std::cout << book[index].gDarkest_secret() <<std::endl;
}

void 	show(Contact book[], int index)
{
	for (int i = 0; i < index; i++)
	{
		std::cout << i;
		std::cout << std::setw(10) << book[i].gfirtstName();
		std::cout << book[i].glastName();
		std::cout << book[i].gnickName();
		std::cout << std::endl;
	}
}