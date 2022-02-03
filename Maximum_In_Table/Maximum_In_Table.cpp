#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    
    cin >> t;

    vector<vector<int>> n { };

    for(int i { }; i < t; ++i)
    {
        n.emplace_back(0);
        for(int j { }; j < t; ++j)
        {
            n[i].emplace_back(0);
        }
    }

    for(int i { }; i < t; ++i)
    {
        n[0][i] = 1;
        n[i][0] = 1;
    }

    for(int i { }; i < t - 1; ++i)
    {
        for(int j { }; j < t - 1; ++j)
        {
            n[i + 1][j + 1] = n[i][j + 1] + n[i + 1][j];
        }
    }

    cout << n[t - 1][t - 1];

    return 0;
}