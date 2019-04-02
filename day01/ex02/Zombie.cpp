/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:56:23 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 14:56:24 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) 
{
	this->type = type;
	this->name = name;
	return;
}
Zombie::~Zombie(void) {return;}
void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>" 
	<< " Braiiiiiiinnnssss..." << std::endl;
}
