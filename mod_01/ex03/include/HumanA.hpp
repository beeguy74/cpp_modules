#ifndef _HUMANA_H_
#define _HUMANA_H_

# include <iostream>
# include "Weapon.hpp"

class   HumanA{
private:
    std::string _name;
    Weapon      &_weapon;
public:
    HumanA(std::string name, Weapon &gun);
    ~HumanA(void);
    void    attack(void);
};

#endif