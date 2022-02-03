#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int a;

        cin >> a;

        vector<int> n;

        for(int i { }; i < a; ++i)
        {
            int j;

            cin >> j;

            n.emplace_back(j);
        }

        int average;

        average = round(accumulate(n.begin(), n.end(), 0) / (a * 1.0));

        int high { }, low { INT_MAX };

        for(auto x : n)
        {
            if(x > high) high = x;
            if(x < low) low = x;
        }

        cout << (high - average) + (average - low) << '\n';
    }
    return 0;
}