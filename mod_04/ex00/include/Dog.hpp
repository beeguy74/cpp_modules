#ifndef _DOG_H_
#define _DOG_H_

# include "Animal.hpp"

class Dog: public Animal{
public:
    Dog();
    Dog(const Dog &other);
    virtual ~Dog();
    void    makeSound() const;
    Dog     &operator=(const Dog &other);
};

#endif
