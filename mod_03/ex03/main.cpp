#include <iostream>
#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap drZod = DiamondTrap();
	std::cout << RED;
	DiamondTrap cheech = DiamondTrap("Cheech");
	std::cout << GREEN;
	DiamondTrap chohng = DiamondTrap("Chohng");

	chohng.highFivesGuys();
	std::cout << RED;
	cheech.attack("Chohng");
	cheech.showStats();
	cheech.guardGate();
	cheech.highFivesGuys();
	cheech.whoAmI();
	std::cout << GREEN;
	chohng.takeDamage(2);
	chohng.beRepaired(2);
	std::cout << RESET;
	drZod = chohng;
	std::cout << GREEN;
	drZod.highFivesGuys();
	drZod.whoAmI();
	std::cout << RESET;
	return 0;
}
