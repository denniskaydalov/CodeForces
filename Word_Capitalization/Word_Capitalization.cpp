#include <iostream>
#include <string>
#include <cctype>
 
int main()
{
    std::string x;

    std::cin >> x;

    std::cout << (char) std::toupper(x[0]) << x.substr(1, static_cast<int>(x.size()));

    return 0;
}