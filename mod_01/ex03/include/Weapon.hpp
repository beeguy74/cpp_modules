#ifndef _WEAPON_H_
#define _WEAPON_H_
# include <iostream>

class Weapon
{
private:
    std::string _type;
    static int  _index;
public:
    Weapon();
    Weapon(std::string type);
    Weapon(const Weapon &weapon);
    ~Weapon(void);

    Weapon& operator=(const Weapon &weapon);
    void                setType(std::string type);
    const std::string&   getType() const;
};

#endif