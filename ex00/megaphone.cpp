#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
    std::string res;

    for (int i = 1; i < argc; ++i)
        res += argv[i];
    for (unsigned long i = 0; i < res.size(); i++)
        res.replace(i, 1, 1, toupper(res[i]));
    std::cout << res << std::endl;
    return (0);
}