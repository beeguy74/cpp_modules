#include "Character.hpp"

Character::Character(): _name("no_name"), _index(0){
    this->_initArr();
    return ;
}

Character::Character(const std::string &name): _name(name), _index(0){
    this->_initArr();
    return ;
}

Character::Character(const Character &other){
    this->_initArr();
    this->operator=(other);
    return;
}

Character::~Character(){
    this->_dropInv();
    return ;
}

Character   &Character::operator=(const Character &other){
    this->_name = other._name;
    this->_dropInv();
    this->_index = other._index;
    int idx = this->_index;
    if (idx < INVSIZE && idx >= 0){
        for (int i = 0; i <= idx; ++i){
            this->_inventory[i] = other._inventory[i];
        }
    }
    return *this;
}

void    Character::_initArr(){
    for (int i = 0; i < INVSIZE; ++i){
        this->_inventory[i] = NULL;
    }
    return ;
}

void    Character::_dropInv(){
    for (int i = 0; i < INVSIZE; ++i){
        if (this->_inventory[i]){
            delete this->_inventory[i];
        }
        this->_inventory[i] = NULL;
    }
    this->_index = 0;
    return ;
}

std::string const   &Character::getName() const{
    return this->_name;
}

void    Character::equip(AMateria *m){
    if (this->_index < INVSIZE){
        this->_inventory[this->_index] = m;
        ++this->_index;
    }
    return ;
}

void    Character::unequip(int idx){
    if (idx < INVSIZE && idx >= 0){
        while (idx < INVSIZE - 1){
            this->_inventory[idx] = this->_inventory[idx + 1];
            ++idx;
        }
        this->_inventory[idx] = NULL;
        --this->_index;
    }
    return ;
}

void    Character::use(int idx, ICharacter& target){
    if (idx < INVSIZE && idx >= 0 && this->_inventory[idx]){
        this->_inventory[idx]->use(target);
    }
    return ;
}
