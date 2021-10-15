#ifndef _WRONGANIMAL_H_
#define _WRONGANIMAL_H_

# include <iostream>

class WrongAnimal{
protected:
    std::string     _type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    virtual     ~WrongAnimal();

    WrongAnimal&    operator=(const WrongAnimal& other);
    void            makeSound() const;
    virtual const std::string   &getType() const;
};

#endif
