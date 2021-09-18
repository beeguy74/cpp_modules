#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ~ScavTrap();
    void    guardGate();
    void    attack(const std::string& taget);
};

#endif