#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)  
    {
        int i { }, j { };
        string s;

        cin >> s;

        for(auto x : s)
        {
            if(x == '0') i++;
            else j++;
        }

        int n { };

        while(min(i, j) != 0) 
        {
            n++;
            i--;
            j--;
        }

        if(n % 2 == 1) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}