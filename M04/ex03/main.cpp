/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:32:27 by igorneumann       #+#    #+#             */
/*   Updated: 2022/02/18 19:39:24 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Icharacter.hpp"
#include "Amateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	//std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	//std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}