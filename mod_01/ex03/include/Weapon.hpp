#ifndef _WEAPON_H_
#define _WEAPON_H_
# include <iostream>

class Weapon
{
private:
    std::string _type;
    static int  _index;
public:
    Weapon(std::string type);
    ~Weapon(void);
    void                setType(std::string type);
    std::string const   &getType(void);
};

#endif