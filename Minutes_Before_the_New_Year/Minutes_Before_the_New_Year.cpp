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
#define RFOR(i, y) for (lli i { y }; i > 0; --i)

template<typename... T>
void read(T&... args) {
((cin >> args), ...);
}

int main()
{
    tc(t)
    {
        int x, y;

        read(x, y);

        cout << 1440 - (x * 60 + y) << endl;
    }

    return 0;
}