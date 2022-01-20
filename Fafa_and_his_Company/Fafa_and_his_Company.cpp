#include <iostream>
 
#define lli long long int
#define tc(t) lli t; cin >> t; while (t--)
 
int main()
{
    int x, c { };

    std::cin >> x;

    for(int i { 1 }; i < x / 2 + 1; ++i)
    {
        if((x - i) % i == 0)
            c++;
    }

    std::cout << c;

    return 0;
}