#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    virtual ~ScavTrap();
    void        guardGate();
    void        attack(const std::string& target);
    ScavTrap&   operator=(const ScavTrap& other);
};

#endif
