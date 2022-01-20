#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
 
#define ll long long int
#define vi(x) vector<int> x { }
#define va(x, i) int i; cin >> i; x.push_back(i)
#define tc(t) ll t; cin >> t; while (t--)
#define FOR(i, y) for (ll i { }; i < (y); ++i)
#define RFOR(i, y) for (ll i { y }; i > 0; --i)
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
        int n;

        read(n);

        int* x { new int[n] { } };

        FOR(i, n*2)
        {
            int j;

            read(j); 

            x[j - 1]++;

            if(x[j - 1] == 1)
                cout << j << ' ';
        }

        cout << endl;
    }

    return 0;
}