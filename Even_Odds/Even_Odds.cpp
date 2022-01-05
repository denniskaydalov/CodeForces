#include <iostream>
#include <math.h>

int main()
{
    long long c, a;

    std::cin >> c >> a;

    if(a <= ceil(c / 2.0)) std::cout << a * 2 - 1;
    else std::cout << std::fixed << static_cast<long long>(floor(c / 2.0) * 2 - ((c - a) * 2));

    return 0;
}
