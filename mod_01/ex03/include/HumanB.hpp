#ifndef _HUMANB_H_
#define _HUMANB_H_

# include <iostream>
# include "Weapon.hpp"

class   HumanB{
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB(std::string name);
    ~HumanB(void);
    void    setWeapon(Weapon &gun);
    void    attack(void);
};

#endif