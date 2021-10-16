#ifndef _ANIMAL_H_
#define _ANIMAL_H_

# include <iostream>

class Animal{
protected:
    std::string     _type;
public:
    Animal();
    Animal(const Animal &other);
    virtual     ~Animal();

    Animal&     operator=(const Animal& other);
    virtual void                makeSound() const;
    virtual const std::string   &getType() const;
};

#endif
