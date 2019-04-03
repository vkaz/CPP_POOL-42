/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:29:00 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 18:29:01 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string);
    HumanB(void);
	~HumanB(void);
    void attack(void);
    void setWeapon(Weapon &weapon);
private:
	std::string   name;
    Weapon        *_weapon;
};

#endif
