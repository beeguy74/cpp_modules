#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap drZod = ClapTrap();
	ClapTrap cheech = ClapTrap("Cheech");
	ClapTrap chohng = ClapTrap("Chohng");
	ScavTrap john;

	john.attack("Cheech");
	cheech.attack("Chohng");
	chohng.takeDamage(2);
	chohng.beRepaired(2);
	return 0;
}