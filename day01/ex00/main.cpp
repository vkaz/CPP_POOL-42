/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:41:44 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 13:41:45 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 	ponyOnTheHeap(std::string str)
{
	Pony 	*heap;

	heap = new Pony();
	heap->sname("poll ");
	heap->slname("qwerty ");
	heap->scity("Kyiv ");
	std::cout << heap->gname() << str << std::endl;
	std::cout << heap->glname() << str << std::endl;
	std::cout << heap->gcity() << str << std::endl;
	delete heap;
}

void 	ponyOnTheStack(std::string str)
{
	Pony 	stack;

	stack.sname("poll ");
	stack.slname("qwerty ");
	stack.scity("Kyiv ");
	std::cout << stack.gname() << str << std::endl;
	std::cout << stack.glname() << str << std::endl;
	std::cout << stack.gcity() << str << std::endl;
}

int  main(void)
{
	ponyOnTheHeap("heap");
	ponyOnTheStack("stack");
	return 0;
}
