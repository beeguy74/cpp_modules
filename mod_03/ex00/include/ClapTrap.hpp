#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

# include <iostream>

class ClapTrap{
private:
    std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    int             _attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ~ClapTrap();
    void            attack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
};

#endif
