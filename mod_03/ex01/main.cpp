#include <iostream>
#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap drZod = ScavTrap();
	ScavTrap cheech = ScavTrap("Cheech");
	ScavTrap chohng = ScavTrap("Chohng");

	chohng.guardGate();
	cheech.attack("Chohng");
	chohng.takeDamage(2);
	chohng.beRepaired(2);
	drZod = chohng;
	drZod.guardGate();
	return 0;
}