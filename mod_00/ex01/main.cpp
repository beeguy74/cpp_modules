#include "phonebook.hpp"

int main(void)
{
    Phonebook   book;
    std::string comma;

    while (true)
    {
        std::cout << "Enter a command for you phonebook:" << std::endl;
        std::getline(std::cin, comma);
        if (!comma.compare("ADD"))
            book.add();
        else if (!comma.compare("SEARCH"))
            book.search();
        else if (!comma.compare("EXIT"))
            return (0);
        else
            std::cout << "Wrong command" << std::endl;
    }
    return (0);
}