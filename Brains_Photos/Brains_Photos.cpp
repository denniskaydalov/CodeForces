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

    int n, m;
    bool c { };

    read(n, m);

    FOR(i, n)
    {
        FOR(j, m)
        {
            char t;

            read(t);

            if(t != 'W' && t != 'B' && t != 'G')
            {
                c = true;
                goto end;
            }
        }
    }

end: 
    cout << (c ? "#Color" : "#Black&White");

    return 0;
}