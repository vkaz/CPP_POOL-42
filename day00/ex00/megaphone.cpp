/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 11:51:05 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/01 11:51:06 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	to_upper(char c)
{
	if (c > 96 && c < 123)
		return c -= 32;
	else
		return c;
}

int		main(int argc, char const **argv)
{
	int i, j;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i] != 0)
		{
			j = 0;
			while (argv[i][j] != 0)
			{
				std::cout << to_upper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
