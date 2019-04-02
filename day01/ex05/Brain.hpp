/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:39:41 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 17:39:42 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include <sstream>

class Brain
{
public:
    Brain(void);
	~Brain(void);
    std::string  identify();
private:
    std::string adress;
};

#endif
