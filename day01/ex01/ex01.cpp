/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:48:32 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 14:48:33 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void 	memoryLeak(void)
{
	std::string* panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
