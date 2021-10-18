#ifndef _CHARACTER_H_
#define _CHARACTER_H_

# include "AMateria.hpp"
# include "ICharacter.hpp"

const int INVSIZE = 4;

class Character: public ICharacter{
private:
    AMateria    *_inventory[INVSIZE];
    std::string _name;
    int         _index;
    void        _dropInv();
    void        _initArr();
public:
    Character();
    Character(const std::string &name);
    Character(const Character &other);
    virtual ~Character();
    void        equip(AMateria *m);
    void        unequip(int idx);
    void        use(int idx, ICharacter& target);
    std::string const & getName() const;
    Character   &operator=(const Character &other);
};

#endif