/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:18:27 by igorneumann       #+#    #+#             */
/*   Updated: 2022/01/11 19:03:27 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*z;
	int		i = 0;
	int		zb = 0;

	if (argc != 3)
	{
		std::cout << "2 argumentos, primer  el numero de Zombies, sergundo su nombre";
		return(0);
	}
	zb = atoi(argv[1]);
	z = zombieHorde( zb, argv[2]);
	while (i < zb)
		z[i++].announce();
	delete[] z;
	return(0);
}