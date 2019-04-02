/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:39:55 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 17:39:56 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Brain.hpp"

class Human
{
public:
    Human(void);
	~Human(void);
    std::string identify(void);
    Brain   getBrain(void);
private:
    Brain   brain;
};

#endif
