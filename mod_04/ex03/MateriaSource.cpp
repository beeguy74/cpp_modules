#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    this->_initArr();
    return ;
};

MateriaSource::MateriaSource(const MateriaSource &other){
    this->_initArr();
    this->operator=(other);
    return ;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < this->_index; ++i){
        delete this->_storage[i];
    }
    return ;
}

void    MateriaSource::_initArr(){
    this->_index = 0;
    for (int i = 0; i < STORAGEMAX; ++i){
        this->_storage[i] = NULL;
    }
    return ;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &other){
    for (int i = 0; i < this->_index; ++i){
        delete this->_storage[i];
    }
    this->_index = other._index;
    for (int i = 0; i < this->_index; ++i){
        this->_storage[i] = other._storage[i]->clone();
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *inst){
    if (this->_index < STORAGEMAX){
        this->_storage[this->_index] = inst;
        ++this->_index;
    }
    return ;
}

AMateria    *MateriaSource::createMateria(const std::string &type){
    for (int i = 0; i < this->_index; ++i){
        if (this->_storage[i]->getType() == type){
            return (this->_storage[i]->clone());
        }
    }
    return 0;
}
