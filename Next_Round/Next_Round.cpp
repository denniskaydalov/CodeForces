#include <iostream>
#include <vector>

int main()
{
    int n, k, a { };
    std::vector<int> scores { };

    std::cin >> n >> k;

    for(int i { }; i < n; ++i)
    {
        int g;

        std::cin >> g;

        scores.push_back(g);
    }

    k = scores[k - 1];

    for(int i { }; i < n; ++i)
    {
        if(scores[i] >= k && scores[i] > 0) ++a;
        else break;
    }

    std::cout << a;
    
    return 0;
}
