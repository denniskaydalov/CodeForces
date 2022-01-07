#include <iostream>

#define ebe(i) std::stoi(std::to_string(i).pop_back())
 
int main()
{
    int money;

    std::cin >> money;

    int f, s;

    f = money % 10;
    s = money / 10 % 10;

    std::cout << (money > 0 ? money : (money >= -10 ? 0 : (s > f ? money / 10 : money / 10 - s + f)));

    return 0;
}