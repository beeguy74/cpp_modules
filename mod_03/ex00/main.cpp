#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap drZod = ClapTrap();
	ClapTrap cheech = ClapTrap("Cheech");
	ClapTrap chohng = ClapTrap("Chohng");

	cheech.attack("Chohng");
	chohng.takeDamage(2);
	chohng.beRepaired(2);
	return 0;
}