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
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()

template<typename... T>
void read(T&... args) {
((cin >> args), ...);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    tc(t)
    {
        int a, b;

        read(a, b);

        if(a == b) cout << 0 << '\n';
        else if (a > b)
        {
            if(abs(a - b) % 2 == 0) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
        else
        {
            if(abs(a - b) % 2 == 0) cout << 2 << '\n';
            else cout << 1 << '\n';
        }
    }

    return 0;
}