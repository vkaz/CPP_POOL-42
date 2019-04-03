/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:28:20 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 18:28:21 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {return ;}
Weapon::~Weapon(void) {return ;}
Weapon::Weapon(std::string str) 
{
    this->type = str;
}

std::string Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string str)
{
    this->type = str;
}
