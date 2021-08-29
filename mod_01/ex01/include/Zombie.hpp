#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

# include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void    setName(std::string name);
    void    announce(void);
};


#endif