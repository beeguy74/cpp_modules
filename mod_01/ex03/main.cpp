#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
    Weapon  excalibur = Weapon();
    HumanA  artur("King Arthur", excalibur);
    excalibur.setType("Excalibur");
    artur.attack();

    return 0;
}