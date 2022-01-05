#include <iostream>
#include <math.h>

int main()
{
    for(int i { }; i < 25; ++i)
    {
        int o;
        
        std::cin >> o;

        if(o) 
        {
            std::cout << round(std::abs(i - 12) / 5.0) + std::abs((i + 5) % 5 - 2);  
            break;
        }
    }

    return 0;
}
