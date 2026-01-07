/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:35:05 by joeyscags         #+#    #+#             */
/*   Updated: 2026/01/07 15:17:35 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been assembled!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been disassembled!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	
}
