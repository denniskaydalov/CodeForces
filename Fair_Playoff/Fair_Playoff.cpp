#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    int t;

    std::cin >> t;

    while(t--)
    {
        int s; 
        
        std::vector<int> p { }, r { };

        for(int i { }; i < 4; ++i)
        {
            int x;

            std::cin >> x;

            p.push_back(x);
        }

        r = p;

        sort(p.begin(), p.end());

        s = p[0] + p[1];

        std::cout << (r[0] + r[1] == s || r[2] + r[3] == s ? "NO" : "YES") << std::endl;
    }

    return 0;
}