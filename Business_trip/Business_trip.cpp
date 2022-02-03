#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;

    vector<int> months { };

    cin >> n;

    for(int i { }; i < 12; ++i)
    {
        int j;

        cin >> j;

        months.push_back(j);
    }

    sort(months.rbegin(), months.rend());

    int i { };

    while(n > 0)
    {
        if(i == months.size())
        {
            cout << -1;
            goto done;
        }

        n -= months[i];
        i++;
    }

    cout << i;

done:;
    return 0;
}