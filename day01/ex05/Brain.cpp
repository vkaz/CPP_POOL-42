/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:39:31 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 17:39:32 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream ss;
	ss << this;
	this->adress = ss.str();
}
Brain::~Brain(void) {return;}
std::string Brain::identify(void)
{
	return (this->adress);
}
