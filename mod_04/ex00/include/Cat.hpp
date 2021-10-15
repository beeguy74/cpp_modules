#ifndef _CAT_H_
#define _CAT_H_

# include "Animal.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(const Cat &other);
    virtual ~Cat();
    void    makeSound() const;
    Cat     &operator=(const Cat &other);
};

#endif
