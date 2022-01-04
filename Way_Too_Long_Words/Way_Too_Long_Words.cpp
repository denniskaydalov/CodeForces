#include <iostream>

int main()
{
    int count, ans;

    std::cin >> count;

    for(int i { }; i < count; ++i)
    {
        int m;

        for(int j { }, k; j < (std::cin >> k, 3); ++j)
        {
            if(k) 
            {
                m++;
            }

            if(m == 2)
            {
                ++ans;
                std::cin >> m;
                m = 0;
                break;
            }
        }
    }

    std::cout << ans;

    return 0;
}