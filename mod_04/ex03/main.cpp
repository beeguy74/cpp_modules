#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void    test(){
    ICharacter* vasya = new Character("vasya");
    Ice         ice;
    Cure        cure;
    AMateria    *iceArr = new Ice;
    AMateria    *cureArr = new Cure;

    std::cout << "__________Equip materias and use__________" << std::endl;
    vasya->equip(iceArr);
    vasya->equip(cureArr);
    vasya->equip(iceArr);
    vasya->equip(cureArr);
    for (int i = -2; i < 10; ++i){
        vasya->use(i, *vasya);
    }
    std::cout << "__________Unequip materias and use__________" << std::endl;
    for (int i = -2; i < 10; ++i){
        vasya->unequip(0);
    }
    for (int i = -2; i < 10; ++i){
        vasya->use(i, *vasya);
    }
    std::cout << "__________Stdout is empty cuz vasya has no materias__________" << std::endl;
    delete vasya;
    delete iceArr;
    delete cureArr;
}

int main(){
    test();
    std::cout << "__________Intra's main test__________" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}