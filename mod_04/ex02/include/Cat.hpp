#ifndef _CAT_H_
#define _CAT_H_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal{
private:
    Brain   *_brain;
public:
    Cat();
    Cat(const Cat &other);
    virtual ~Cat();
    void    makeSound() const;
    const Brain *getBrain() const;
    Cat     &operator=(const Cat &other);
};

#endif
