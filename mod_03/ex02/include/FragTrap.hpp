#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap();
    FragTrap(const std::string& name);
    ~FragTrap();
    void    highFivesGuys();
    // void    attack(const std::string& target);
};

#endif