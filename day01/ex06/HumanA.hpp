/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:28:55 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 18:28:56 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string str, Weapon &weapon);
	~HumanA(void);
    void attack(void);

private:
	std::string   name;
    Weapon        &_weapon;
};

#endif
