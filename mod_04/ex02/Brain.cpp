#include "Brain.hpp"

Brain::Brain(){
    std::string str = "idea_#_";
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = str + std::string(1, char(rand() % 10 + '0'));
    }
    std::cout << "Default Brain constructor " << std::endl;
    return ;
}

Brain::Brain(const Brain& other){
    std::cout << "Copy Brain constructor" << std::endl;
    this->operator=(other);
    return ;
}

Brain::~Brain(){
    std::cout << "Destructor Brain " << std::endl;
    return ;
}

Brain&   Brain::operator=(const Brain& other){
    std::cout << "Assignation Brain " << std::endl;
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = other.getIdeas()[i];
    }
    return *this;
}

const std::string   *Brain::getIdeas() const{
    return this->_ideas;
}
