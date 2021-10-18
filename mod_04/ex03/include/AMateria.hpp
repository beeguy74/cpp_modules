#ifndef _AMATERIA_H_
#define _AMATERIA_H_

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria{
protected:
    std::string     _type;
public:
    AMateria(std::string const & type);
    virtual     ~AMateria();
    
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
