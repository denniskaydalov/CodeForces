#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>

int main()
{
    std::string input;
    std::vector<int> nums { };

    std::cin >> input;

    for(char x : input)
    {
        if(isdigit(x)) 
        {
            nums.push_back(x - '0'); 
        }
    }

    std::sort(nums.begin(), nums.end());

    std::cout << nums[0];

    for(int i { 1 }; i < static_cast<int>(nums.size()); ++i)
    {
        std::cout << '+' << nums[i];
    }

    return 0;
}
