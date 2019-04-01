/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:51:35 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/01 14:51:36 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class Contact
{
public:
	Contact();
	~Contact();
	void		sfirtstName(std::string);
	void		slastName(std::string);
	void		snickName(std::string);
	void		slogin(std::string);
	void		spost_ad(std::string);
	void		semail_ad(std::string);
	void		sphone_numb(std::string);
	void		sBirthday(std::string);
	void		sFavorite(std::string);
	void		sUnderwear(std::string);
	void		sDarkest_secret(std::string);
	std::string	gfirtstName(void);
	std::string	glastName(void);
	std::string	gnickName(void);
	std::string	glogin(void);
	std::string	gpost_ad(void);
	std::string	gemail_ad(void);
	std::string	gphone_numb(void);
	std::string	gBirthday(void);
	std::string	gFavorite(void);
	std::string	gUnderwear(void);
	std::string	gDarkest_secret(void);

private:
	std::string	firtstName;
	std::string	lastName;
	std::string	nickName;
	std::string	login;
	std::string	post_ad;
	std::string	email_ad;
	std::string	phone_numb;
	std::string	Birthday;
	std::string	Favorite;
	std::string	Underwear;
	std::string	Darkest_secret;
};

Contact addcon(void);
void	search(Contact book[], int index);
void 	show(Contact book[], int index);

#endif
