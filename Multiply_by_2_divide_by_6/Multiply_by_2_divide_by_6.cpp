#include <iostream>
#include <math.h>
#include <limits>
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
        lli n, i { };

        read(n);
        
        while(n > 1)
        {
            if(n >= 0x3FFFFFFFFFFFFFFF)
            {
                cout << -1 << endl;
                goto done;
            }
            else if(n % 6 != 0 || n < 6)
            {
                n *= 2;
                ++i;
            }
            else
            {
                lli k { 1 };
                FOR(j, n)
                {
                    k *= 6;
                    if(n == k)
                    {
                        cout << i + j + 1 << endl;
                        goto done;
                    }
                    else if(k > n)
                    {
                        n *= 2;
                        ++i;
                        break;
                    }
                }
            }
        }
        cout << i << endl;

    done:;
    }

    return 0;
}