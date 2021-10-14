#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

# include <iostream>

class ClapTrap{
protected:
    std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    int             _attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    virtual ~ClapTrap();
    virtual void    attack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    ClapTrap&       operator=(const ClapTrap& other);
};

#endif
