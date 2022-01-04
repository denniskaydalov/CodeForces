#include <iostream>

int main()
{
    int x, y;

    std::cin >> x >> y;

    std::cout << static_cast<int>(x * y / 2);

    return 0;
}
