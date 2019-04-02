/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:41:14 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 13:41:15 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) {return ;}
Pony::~Pony(void) {return ;}

void 	Pony::sname(std::string str)
{
	this->name = str;
}
void 	Pony::slname(std::string str)
{
	this->lname = str;
}
void 	Pony::scity(std::string str)
{
	this->city = str;
}
std::string	Pony::gname(void)
{
	return (this->name);
}
std::string	Pony::glname(void)
{
	return (this->lname);
}
std::string	Pony::gcity(void)
{
	return (this->city);
}