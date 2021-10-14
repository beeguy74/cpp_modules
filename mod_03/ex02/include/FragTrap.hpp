#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    virtual ~FragTrap();
    void    highFivesGuys();
    FragTrap&   operator=(const FragTrap& other);
};

#endif
