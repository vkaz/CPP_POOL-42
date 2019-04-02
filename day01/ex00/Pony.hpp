/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:41:28 by vkaznodi          #+#    #+#             */
/*   Updated: 2019/04/02 13:41:29 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>

class Pony
{
public:
	Pony(void);
	~Pony(void);
	void 	sname(std::string);
	void 	slname(std::string);
	void 	scity(std::string);
	std::string	gname(void);
	std::string	glname(void);
	std::string	gcity(void);
private:
	std::string	name;
	std::string lname;
	std::string city;
};

#endif
