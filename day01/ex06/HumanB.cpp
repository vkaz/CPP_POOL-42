/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:29:04 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 18:29:05 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {return ;}
HumanB::~HumanB(void) {return ;}
HumanB::HumanB(std::string str) 
{
    this->name = str;
}
void   HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void   HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << _weapon->getType() << std::endl;
}
