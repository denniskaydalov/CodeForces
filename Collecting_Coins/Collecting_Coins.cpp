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
        int a, b, c, n, m;

        read(a, b, c, n);

        m = max(a, max(b, c));

        n -= m - a + m - b + m - c;

        cout << (n >= 0 ? (n % 3 == 0 ? "YES" : "NO") : "NO") << '\n';
    }

    return 0;
}