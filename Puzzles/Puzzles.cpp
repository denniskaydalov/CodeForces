#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int students, pCount, sml { 1001 };
    std::vector<int> puzzles { };

    std::cin >> students >> pCount;

    for(int i {}; i < pCount; ++i)
    {
        int puzzle;

        std::cin >> puzzle;

        puzzles.push_back(puzzle);
    }

    std::sort(puzzles.begin(), puzzles.end());

    for(int i { }; i < static_cast<int>(puzzles.size()) + 1 - students; ++i)
    {
        if(puzzles[students - 1 + i] - puzzles[i] < sml)
            sml = puzzles[students - 1 + i] - puzzles[i];
    }
    
    std::cout << sml;

    return 0;
}