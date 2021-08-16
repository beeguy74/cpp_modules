#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"

class Phonebook
{
        int     full;
        int     index;
        Contact arr[8];
    public:
        void    print();
        void    add();
        void    search();
};
