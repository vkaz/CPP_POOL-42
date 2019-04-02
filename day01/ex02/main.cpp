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

#include "ZombieEvent.hpp"

int 	main(void)
{
	Zombie      *zombie_1;
    Zombie      *zombie_2;
    Zombie      *zombie_3;
    ZombieEvent event;

    std::srand(time(0));
    event.setZombieType("first");
    zombie_1 = event.randomChump();
    zombie_1->announce();
    delete zombie_1;
    event.setZombieType("second");
    zombie_2 = event.randomChump();
    zombie_2->announce();
    delete zombie_2;
    event.setZombieType("third");
    zombie_3 = event.randomChump();
    zombie_3->announce();
    delete zombie_3;
    return (0);
}
