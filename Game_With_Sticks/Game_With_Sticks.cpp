#include <iostream>
 
int main()
{
    int x, y;
 
    std::cin >> x >> y;

    int m = std::min(x, y);
 
    std::cout << (m % 2 == 0 ? "Malvika " : "Akshat ");
    
    return 0;
}