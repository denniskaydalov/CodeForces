#include <iostream>
#include <math.h>
 
#define lli long long int
#define tc(t) lli t; cin >> t; while (t--)
 
int main()
{
    int x, y;

    std::cin >> x >> y;

    switch(std::max(x, y))
    {
        case 1:
            std::cout << "1/1";
            break;
        case 2:
            std::cout << "5/6";
            break;
        case 3:
            std::cout << "2/3";
            break;
        case 4:
            std::cout << "1/2";
            break;
        case 5:
            std::cout << "1/3";
            break;
        case 6:
            std::cout << "1/6";
            break;
    }

    return 0;
}