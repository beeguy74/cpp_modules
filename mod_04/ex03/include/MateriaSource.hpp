#ifndef _MATERIASOURCE_H_
#define _MATERIASOURCE_H_

#include "IMateriaSource.hpp"

const int STORAGEMAX = 4;

class MateriaSource: virtual public IMateriaSource{
private:
    AMateria    *_storage[STORAGEMAX];
    int         _index;
    void        _initArr();
public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    ~MateriaSource();
    void        learnMateria(AMateria *inst);
    AMateria    *createMateria(const std::string &type);
    MateriaSource       &operator=(const MateriaSource &materiaSource);
};

#endif
