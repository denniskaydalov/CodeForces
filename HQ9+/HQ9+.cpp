#include <iostream>
#include <string>

#define npos std::string::npos

int main()
{
    std::string input;

    std::cin >> input;

    if(input.find("H") != npos || input.find("Q") != npos || input.find("9") != npos)
        std::cout << "YES";
    else std::cout << "NO";

    return 0;
}
