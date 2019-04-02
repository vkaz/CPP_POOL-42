/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:56:44 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 14:56:45 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>

ZombieEvent::ZombieEvent(void) {return ;}
ZombieEvent::~ZombieEvent(void) {return ;}
void		ZombieEvent::setZombieType(std::string str)
{
	this->type = str;
}
Zombie*		ZombieEvent::newZombie(std::string str)
{
	return (new Zombie(this->type, str));
}
std::string	ZombieEvent::getZombieType(void)
{
	return (this->type);
}
Zombie*		ZombieEvent::randomChump(void)
{
	Zombie 		*zomb;
	std::string	names[] = {"qwe", "asd", "zxc", "tyu", "zxc", "sdf", "asd2"};
	int i = std::rand() % 7;	

	if (this->type == "")
		this->setZombieType("1");
	return (zomb = newZombie(names[i]));
}
