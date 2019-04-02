/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:56:54 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 14:56:56 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int 	main(void)
{
    ZombieHorde z1 = ZombieHorde(2);
    ZombieHorde z2 = ZombieHorde();
    z1.announce();
    z2.announce();
    return (0);
}
