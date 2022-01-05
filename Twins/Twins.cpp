#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>

int main()
{
    int c, n, a { }; 
    std::vector<int> coins;

    std::cin >> c;

    for(int i { }; i < c; ++i)
    {
        int coin;

        std::cin >> coin;

        coins.push_back(coin);
    }

    n = floor(std::accumulate(coins.begin(), coins.end(), 0) / 2 + 1);

    sort(coins.rbegin(), coins.rend());

    for(auto x : coins)
    {
        n -= x;
        if(n > 0) ++a;
        else break;
    }

    std::cout << a + 1;

    return 0;
}
