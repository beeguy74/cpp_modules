#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
    Weapon  excalibur = Weapon();
    HumanA  artur("King Arthur", excalibur);
    HumanB  lanselot("Lanselot");
    excalibur.setType("Excalibur");
    artur.attack();
    lanselot.attack();
    lanselot.setWeapon(&excalibur);
    lanselot.attack();
    return 0;
}