#include <iostream>
 
int main()
{
    int c;

    std::cin >> c;

    int i { 1 };

    while(c > 0)
    {
        i++;
        c -= (i * (i + 1)) / 2;
    }

    std::cout << i - 1;

    return 0;
}