#include <iostream>
#include <sstream>

#ifndef _CONTACT_H_
#define _CONTACT_H_

class Contact
{
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_numb;
        std::string secret;
        std::string get_stream(std::string src);
    public:
                    Contact(void);
                    ~Contact(void);
        void        create();
        void        print();
        void        print_search(int i);
};

#endif