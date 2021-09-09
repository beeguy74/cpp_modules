#include "Karen.hpp"

Karen::Karen(){
    this->_funcsNames[0] = "DEBUG";
    this->_funcsNames[1] = "INFO";
    this->_funcsNames[2] = "WARNING";
    this->_funcsNames[3] = "ERROR";
    this->_funcs[0] = &Karen::debug;
    this->_funcs[1] = &Karen::info;
    this->_funcs[2] = &Karen::warning;
    this->_funcs[3] = &Karen::error;
    return ;
}

Karen::~Karen(){
    return ;
}

void    Karen::debug(){
    std::cout << "I love to get extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup ";
    std::cout << "burger. I just love it!" << '\n';
    return;
}

void    Karen::info(){
    std::cout << "I cannot believe adding extra bacon cost ";
    std::cout << "more money. You don’t put enough! If you ";
    std::cout << "did I would not have to ask for it!" << '\n';
    return ;
}

void    Karen::warning(){
    std::cout << "I think I deserve to have some extra bacon ";
    std::cout << "for free. I’ve been coming here for years ";
    std::cout << "and you just started working here last month." << '\n';
    return ;
}

void    Karen::error(){
    std::cout << "This is unacceptable, I want to ";
    std::cout << "speak to the manager now." << '\n';
    return ;
}

void    Karen::comlain(std::string level){
    for (int i = 0; i < 4; i++){
        if(level.compare(this->_funcsNames[i]) == 0){
            (this->*_funcs[i]) ();
        }
    }
    return ;
}