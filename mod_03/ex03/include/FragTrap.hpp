#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
public:
    FragTrap();
    FragTrap(const std::string& name);
    ~FragTrap();
    void    highFivesGuys();
};

#endif
