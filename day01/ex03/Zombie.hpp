/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:56:30 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 14:56:31 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
public:
	Zombie(std::string, std::string);
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void sname(std::string);
	void stype(std::string);

private:
	std::string name;
	std::string type;
};

#endif
