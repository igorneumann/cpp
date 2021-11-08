/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igorneumann <igorneumann@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:18:27 by igorneumann       #+#    #+#             */
/*   Updated: 2021/11/08 09:54:21 by igorneumann      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z1;
	Zombie *z2;

	z1 = newZombie("Igor");
	z1->announce();
	z2 = newZombie("Edward");
	z2->announce();
	randomChump("Mike");
	delete z1;
	delete z2;
	return(0);
}