/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:07:13 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 16:07:14 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->n = n;
    this->zomb = new Zombie[n];
    for (int i = 0; i < this->n; i++)
    {
        this->zomb[i].stype("ZombType");
        this->zomb[i].sname(this->randomChump());
    }
}
ZombieHorde::ZombieHorde(void) { return; }
ZombieHorde::~ZombieHorde(void) { return; }
void        ZombieHorde::announce(void)
{
    for (int i = 0; i < this->n; i++)
    {
        this->zomb[i].announce();
    }
}
std::string		ZombieHorde::randomChump(void)
{
	std::string	names[] = {"qwe", "asd", "zxc", "tyu", "zxc", "sdf", "asd2"};
	int i = std::rand() % 7;
	return (names[i]);
}
