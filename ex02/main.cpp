/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:17:11 by joeyscags         #+#    #+#             */
/*   Updated: 2026/01/07 17:30:10 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap clap("Clappy");

	std::cout << "\n=== Creating ScavTrap ===" << std::endl;
	ScavTrap scav("Scavvy");

	std::cout << "\n=== Creating FragTrap ===" << std::endl;
	FragTrap frag("Fraggy");

	std::cout << "\n=== Testing FragTrap abilities ===" << std::endl;
	frag.attack("Enemy");
	frag.highFivesGuys();
	frag.takeDamage(40);
	frag.beRepaired(20);

	std::cout << "\n=== Destroying robots ===" << std::endl;
	return 0;
}
