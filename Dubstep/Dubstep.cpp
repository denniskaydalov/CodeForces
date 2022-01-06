#include <iostream>
#include <string>

int main()
{
    bool trim { true };
    
    std::string remix, original { };

    std::cin >> remix;

    for(int i { }; i < remix.size(); ++i)
    {
        if(remix[i] == 'W' && i < remix.size() - 2)
        {
            if(remix[i+1] == 'U' && remix[i+2] == 'B')
            {
                if(!trim)
                    original += ' ';
                i+=2;
                trim = true;
                continue;
            }
        }

        original += remix[i];
        if(trim) trim = false;
    }
    
    std::cout << original;

    return 0;
}