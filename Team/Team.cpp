#include <iostream>

int main()
{
    int count, ans { };

    std::cin >> count;

    for(int i { }; i < count; ++i)
    {
        int m { };

        for(int j { }; j < 3; ++j)
        {
            int k;

            std::cin >> k;

            if(k) 
            {
                m++;
            }
        }
        
        if(m > 1)
            ++ans;
    }

    std::cout << ans << std::endl;

    return 0;
}
