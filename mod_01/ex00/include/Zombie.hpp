#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

# include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie(void);
    void    announce(void);
};


#endif