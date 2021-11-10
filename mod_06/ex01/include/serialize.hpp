#ifndef _SERIALIZE_H_
#define _SERIALIZE_H_

#include <iostream>
#include <string>

typedef struct  s_Data
{
    std::string str;
    int         num;
}               Data;

uintptr_t   serialize(Data *ptr);

Data  *deserialize(uintptr_t raw);

#endif
