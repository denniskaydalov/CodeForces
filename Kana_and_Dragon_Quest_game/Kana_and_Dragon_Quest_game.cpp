#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int x, n, m;

        cin >> x >> n >> m;

        for(int i { }; i < n; ++i) 
        {
            if(x > 0)
            {
                if(x >= 20)
                    x = x / 2 + 10;
                else break;
            }
            else 
            {
                cout << "YES" << endl;
                goto done;
            }
        }

        for(int i { }; i < m; ++i) 
        {
            if(x > 0)   
                x -= 10;
            else 
            {
                cout << "YES" << endl;
                goto done;
            }
        }
        if(x <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    done:;
    }
}