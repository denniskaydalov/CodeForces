/*
NOT CODEFORCES
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
int main()
{
    std::string input;
    std::vector<char> vowels { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    std::getline(std::cin, input);

    for(int i { }; i < static_cast<int>(input.size()); ++i)
    {
        if(find(vowels.begin(), vowels.end(), input[i]) != vowels.end())
        {
            input.erase(input.begin() + i);
        }
    }

    std::cout << input;

    return 0;
}