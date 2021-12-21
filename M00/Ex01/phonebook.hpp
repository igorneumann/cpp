/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:56:56 by ineumann          #+#    #+#             */
/*   Updated: 2021/12/21 18:33:38 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <string_view>
#include <cstring>

class contact
{
	// Access specifier
	public:

	// Data
	std::string	fname;
	std::string	lname;
	std::string	nick;
	std::string	phone;
	std::string	secret;
	int		i;

	// Print Contact Function()
	void printc()
	{
		std::cout << "\nFirst Name is: " << fname;
		std::cout << "\nLast Name is: " << lname;
		std::cout << "\nNickname is: " << nick;
		std::cout << "\nPhone number is: " << phone;
		std::cout << "\nDarkest Secret is: " << secret << "\n\n";
	}
};

/*
*** phonebook.c
*/

int					main ();
void 				ft_search (contact *cnt, int i);
void				ft_add (contact *cnt);
void				ft_printl (contact	*cnt, int i);
std::string			tench(std::string input);

#endif