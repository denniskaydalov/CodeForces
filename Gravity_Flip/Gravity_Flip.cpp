#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int count; 
    std::vector<int> cubes;

    std::cin >> count;

    for(int i { }; i < count; ++i)
    {
        int cube;

        std::cin >> cube;

        cubes.push_back(cube);
    }

    sort(cubes.begin(), cubes.end());

    for(int i { }; i < static_cast<int>(cubes.size()); ++i)
    {
        std::cout << cubes[i] << ' ';
    }

    return 0;
}
