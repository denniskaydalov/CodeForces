#include <iostream>

int main()
{
    int size;

    std::cin >> size;

    std::cout << (size % 2 == 0 && size != 2 ? "YES" : "NO") << std::endl;
}