/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:47:56 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/01 15:47:57 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {return ;}
Contact::~Contact(void) {return ;}
void		Contact::sfirtstName(std::string str)
{
	this->firtstName = str;
}
void		Contact::slastName(std::string str)
{
	this->lastName = str;
}
void		Contact::snickName(std::string str)
{
	this->nickName = str;
}
void		Contact::slogin(std::string str)
{
	this->login = str;
}
void		Contact::spost_ad(std::string str)
{
	this->post_ad = str;
}
void		Contact::semail_ad(std::string str)
{
	this->email_ad = str;
}
void		Contact::sphone_numb(std::string str)
{
	this->phone_numb = str;
}
void		Contact::sBirthday(std::string str)
{
	this->Birthday = str;
}
void		Contact::sFavorite(std::string str)
{
	this->Favorite = str;
}
void		Contact::sUnderwear(std::string str)
{
	this->Underwear = str;
}
void		Contact::sDarkest_secret(std::string str)
{
	this->Darkest_secret = str;
}
std::string	Contact::gfirtstName(void)
{
	return (this->firtstName);
}
std::string	Contact::glastName(void)
{
	return (this->lastName);
}
std::string	Contact::gnickName(void)
{
	return (this->nickName);
}
std::string	Contact::glogin(void)
{
	return (this->login);
}
std::string	Contact::gpost_ad(void)
{
	return (this->post_ad);
}
std::string	Contact::gemail_ad(void)
{
	return (this->email_ad);
}
std::string	Contact::gphone_numb(void)
{
	return (this->phone_numb);
}
std::string	Contact::gBirthday(void)
{
	return (this->Birthday);
}
std::string	Contact::gFavorite(void)
{
	return (this->Favorite);
}
std::string	Contact::gUnderwear(void)
{
	return (this->Underwear);
}
std::string	Contact::gDarkest_secret(void)
{
	return (this->Darkest_secret);
}
