/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:16:52 by joeyscags         #+#    #+#             */
/*   Updated: 2026/01/07 14:16:53 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
	std::cout << "=== Creating ClapTraps ===" << std::endl;
	ClapTrap robot1("R2D2");
	ClapTrap robot2("C3PO");

	std::cout << "\n=== Testing attacks ===" << std::endl;
	robot1.attack("C3PO");
	robot1.attack("Enemy");

	std::cout << "\n=== Testing damage ===" << std::endl;
	robot2.takeDamage(5);
	robot2.takeDamage(3);

	std::cout << "\n=== Testing repair ===" << std::endl;
	robot2.beRepaired(4);
	robot1.beRepaired(2);

	std::cout << "\n=== Testing edge cases ===" << std::endl;
	robot2.takeDamage(20);
	robot2.attack("Enemy");
	robot2.beRepaired(5);

	std::cout << "\n=== Destroying ClapTraps ===" << std::endl;
	return 0;
}
