#ifndef _SERIALIZE_H_
#define _SERIALIZE_H_

#include <iostream>
#include <string>

typedef struct  s_Data
{
    std::string str;
    int         num;
}               t_Data;

uintptr_t   serialize(t_Data *ptr);

t_Data  *deserialize(uintptr_t raw);

#endif
