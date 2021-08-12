#include <iostream>
#include <string>

int main(void)
{
    std::string res[8];
    std::string tmp;

    std::cout << "Enter a command for you phonebook" << std::endl;
    std::cin >> tmp;
    while (tmp.compare("EXIT"))
    {
        res->append(tmp);
        std::cin >> tmp;
    }
    for (int i = 0; i < 8; i++)
        std::cout << res[i] << std::endl;

    return (0);
}