#ifndef _WRONGCAT_H_
#define _WRONGCAT_H_

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    virtual ~WrongCat();
    void    makeSound() const;
    WrongCat     &operator=(const WrongCat &other);
};

#endif
