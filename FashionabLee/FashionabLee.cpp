#include <iostream>
 
int main()
{
    int t;

    std::cin >> t;

    while(t--)
    {
        int x;

        std::cin >> x;

        std::cout << (x % 4 == 0 ? "YES" : "NO") << std::endl;
    }

    return 0;
}