#include <iostream>
#include <string>

int main()
{
    int c, a { };

    std::cin >> c;

    for(int i { }; i < c; ++i)
    {
        std::string statement;

        std::cin >> statement;

        if(statement.find("++") != std::string::npos) ++a;
        if(statement.find("--") != std::string::npos) --a;
    }

    std::cout << a;

    return 0;
}
