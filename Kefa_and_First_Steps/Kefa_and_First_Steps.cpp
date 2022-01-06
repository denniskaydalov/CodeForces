#include <iostream>

int main()
{
    long long count, p { 0xFFFFFFFFFFF }, a { }, cu { };
    
    std::cin >> count;

    for(int i { }; i < count; ++i)
    {
        int c;

        std::cin >> c;

        if(c >= p)
        {
            ++cu;

            if(cu > a)
            {
                a = cu;
            }
        }
        else cu = 0;

        p = c;
    }

    std::cout << a + 1;

    return 0;
}
