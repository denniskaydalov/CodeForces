#include <iostream>
#include <math.h>
 
int main()
{
    int t;

    std::cin >> t;

    while(t--)
    {
        int x, y;

        std::cin >> x >> y;

        std::cout << std::fixed << static_cast<int>(ceil(x * y / 2.0)) << std::endl;
    }

    return 0;
}