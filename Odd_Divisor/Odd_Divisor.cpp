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
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'

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
        lli n;

        read(n);

        if(n > 2)
        {
            if(n % 2 == 1)
            {
                cout << "YES" << endl;
                goto done;
            }
            else
            {
                while(n % 2 == 0)
                {
                    n /= 2;
                    if (n == 1)
                    {
                        cout << "NO" << endl;
                        goto done;
                    }
                }
                cout << "YES" << endl;
                goto done;
            }
        }
        cout << "NO" << endl;

    done:;
    }

    return 0;
}