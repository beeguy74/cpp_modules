#ifndef _ICE_H_
#define _ICE_H_

# include "AMateria.hpp"

class Ice: virtual public AMateria{
public:
    Ice();
    virtual     ~Ice();
    Ice         *clone() const;
    void        use(ICharacter &target);
};

#endif
