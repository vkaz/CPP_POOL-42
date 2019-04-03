/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:28:50 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 18:28:51 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void) {return ;}
HumanA::HumanA(std::string str, Weapon &weapon):_weapon(weapon)
{
    this->name = str;
}
void   HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->_weapon.getType() << std::endl;
}
 