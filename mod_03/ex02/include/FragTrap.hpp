#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap();
    FragTrap(const std::string& name);
    virtual ~FragTrap();
    void    highFivesGuys();
};

#endif
