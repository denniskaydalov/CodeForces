/*
not codeforces
*/

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
    int x, y, c { }, xc { }, yc { };

    cin >> x >> y;

    int *xf { new int[x] { } }, *yf { new int[y] { } };

    tc(t)
    {
        char dir;
        int n;

        cin >> dir >> n;

        if((dir == 'R' ? xf : yf)[n - 1] == 1)
        {
            (dir == 'R' ? xc : yc)--;
            (dir == 'R' ? xf : yf)[n - 1]--;
        }
        else
        {
            (dir == 'R' ? xc : yc)++;
            (dir == 'R' ? xf : yf)[n - 1]++;

        }
    }

    FOR(i, x)
        if(xf[i] == 1) c += y - yc;
    FOR(i, y)
        if(yf[i] == 1) c += x - xc;

    cout << c;

    return 0;
}