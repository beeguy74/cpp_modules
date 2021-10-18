#ifndef _CURE_H_
#define _CURE_H_

# include "AMateria.hpp"

class Cure: virtual public AMateria{
public:
    Cure();
    virtual     ~Cure();
    Cure         *clone() const;
    void        use(ICharacter &target);
};

#endif
