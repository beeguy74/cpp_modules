#include <iostream>
#include "contact.hpp"

#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

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

#endif