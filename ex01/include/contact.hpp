#include <iostream>
#include <string>

class Contact
{
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_numb;
        std::string secret;
    public:
        void        create();
        void        print();
        void        print_search(int i);
};