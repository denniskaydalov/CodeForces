/*
NOT CODEFORCES
*/

#include <iostream>
#include <string>
#include <cctype>
 
int main()
{
    std::string input;
    int letters[26] { }, c;

    std::getline(std::cin, input);

    for(auto x: input)
    {
        letters[std::tolower(x) - '0']++;
        if(letters[std::tolower(x) - '0'] == 2) c++;
    }

    std::cout << c;

    return 0;
}