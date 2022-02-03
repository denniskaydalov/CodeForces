#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> map { };
    pair<string, int> g { "", -1 };

    int n;
    string s;

    cin >> n >> s;

    for(int i { }; i < n - 1; ++i)
    {
        string t { s[i], s[i + 1] };

        if(map.find(t) != map.end())
            map[t]++;
        else map.insert(pair<string, int>(t, 1));
    }

    for(auto x : map)
        if(x.second > g.second) 
        {
            g.first = x.first;
            g.second = x.second;
        }

    cout << g.first;

    return 0;
}