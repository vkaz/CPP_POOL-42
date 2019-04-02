/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:56:38 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 14:56:39 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void		setZombieType(std::string);
	Zombie		*newZombie(std::string);
	std::string	getZombieType(void);
	Zombie		*randomChump(void);
private:
	std::string name;
	std::string type;
};

#endif
