#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

typedef long long int ll;
 
#define tc(t) ll t; cin >> t; while (t--)
#define FOR(i, y) for (ll i { }; i < (y); ++i)
#define RFOR(i, y) for (ll i { y }; i > 0; --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
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

    ll n, s { };
    string input;

    read(n, input);

    for(auto x : input)
    {
        s += (x == '0' ? -1 : 1);
    }

    cout << abs(s);

    return 0;
}