#ifndef _ANIMAL_H_
#define _ANIMAL_H_

# include <iostream>

class Animal{
protected:
    std::string     _type;
public:
    Animal();
    virtual     ~Animal();

    virtual void                makeSound() const = 0;
    virtual const std::string   &getType() const;
};

#endif
