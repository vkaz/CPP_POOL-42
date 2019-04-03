/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:28:25 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 18:28:26 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string.h>
# include <iostream>

class Weapon
{
public:
    Weapon(std::string);
    Weapon(void);
	~Weapon(void);
    std::string getType(void);
    void setType(std::string);

private:
	std::string   type;
};

#endif
