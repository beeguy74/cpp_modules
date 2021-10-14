#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap(const std::string& name);
    virtual ~ScavTrap();
    void        guardGate();
    void        attack(const std::string& target);
    ScavTrap&   operator=(const ScavTrap& other);
};

#endif