#ifndef _DOG_H_
#define _DOG_H_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
private:
    Brain   *_brain;
public:
    Dog();
    Dog(const Dog &other);
    virtual ~Dog();
    void        makeSound() const;
    const Brain *getBrain() const;
    Dog     &operator=(const Dog &other);
};

#endif
