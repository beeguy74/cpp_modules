#include <iostream>
#include "FragTrap.hpp"

int main( void ) {
	FragTrap drZod = FragTrap();
	FragTrap cheech = FragTrap("Cheech");
	FragTrap chohng = FragTrap("Chohng");

	chohng.highFivesGuys();
	cheech.attack("Chohng");
	chohng.takeDamage(2);
	chohng.beRepaired(2);
	return 0;
}