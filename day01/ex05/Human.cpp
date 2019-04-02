/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:39:58 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 17:39:59 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
    Brain *brain = new Brain();
    this->brain = *brain;
}
Human::~Human(void) { return; }
std::string Human::identify(void)
{
    return (this->brain.identify());
}
Brain Human::getBrain(void)
{
    return (this->brain);
}
