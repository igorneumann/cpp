/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:56:56 by ineumann          #+#    #+#             */
/*   Updated: 2021/10/29 18:39:24 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <string_view>
#include <cstring>

using namespace std;

class contact
{
	// Access specifier
	public:

	// Data
	string	fname;
	string	lname;
	string	nick;
	string	phone;
	string	secret;
	int		i;

	// Print Contact Function()
	void printc()
	{
		cout << "\nFirst Name is: " << fname;
		cout << "\nLast Name is: " << lname;
		cout << "\nNickname is: " << nick;
		cout << "\nPhone number is: " << phone;
		cout << "\nDarkest Secret is: " << secret << "\n\n";
	}
};

/*
*** phonebook.c
*/

int					main ();
void 				ft_search (contact *cnt, int i);
void				ft_add (contact *cnt);
void				ft_printl (contact	*cnt, int i);
string				tench(string input);

#endif