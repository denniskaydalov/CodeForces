#include <iostream>
#include <string>

int main()
{
    std::string input;
    int c, p { 2 };

    std::cin >> input;

    for(char x : input)
    {
        if(x - '0' == p) ++c;
        else c = 0;

        if(c == 6) 
        {
            std::cout << "YES";
            goto done;
        }

        p = x - '0';
    }

    std::cout << "NO";

done:
    return 0;
}
