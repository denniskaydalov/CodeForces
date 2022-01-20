#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
 
#define lli long long int
#define tc(t) lli t; cin >> t; while (t--)
#define FOR(i, y) for (lli i { }; i < (y); ++i)
 
int main()
{
    int x { }, y { };
    string input;

    cin >> input;

    for(auto i : input)
    {
        if(i == 'H')
        {
            if(x == 1)
                x = 0;
            else x++;
        }
        else
        {
            if(y == 1)
                y = 0;
            else y++;
        }
    }

    if(x == 1)
    {
        if(y == 1)
            cout << "4 3\n2 1";
        else cout << "3 4\n1 2";
    }
    else if(y == 1)
        cout << "2 1\n4 3";
    else cout << "1 2\n3 4";

    return 0;
}