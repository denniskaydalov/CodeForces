#include <iostream>
#include <math.h>
 
int main()
{
    int t;
 
    std::cin >> t;
 
    while(t--)
    {
        int x, y, p1, p2;
        double z;
 
        std::cin >> x >> p1 >> y >> p2;
 
        z = log10((double) x / y) + (p1 - p2);
 
        if(z > 0)
            std::cout << ">";
        else if(z < 0) std::cout << "<";
        else std::cout << "=";
 
        std::cout << std::endl;
    }
 
    return 0;
}