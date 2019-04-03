/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:07:20 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 16:07:21 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int);
    ZombieHorde(void);
	~ZombieHorde(void);
	std::string randomChump(void);
    void announce(void);

private:
	Zombie      *zomb;
	int         n;
};

#endif
