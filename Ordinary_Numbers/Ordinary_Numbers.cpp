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

template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}
 
int main()
{
    tc(t)
    {
        int n, p;

        cin >> n;

        if(n < 10) cout << n << endl;
        else
        {
            p = static_cast<int>(log10(n)) * 9;

            int s;

            int tm { (int) (n / pow(10, static_cast<int>(log10(n)))) % 10 };

            RFOR(i, static_cast<int>(log10(n)))
            {
                int tmp { (int) (n / pow(10, i - 1)) % 10 };

                if(tmp > tm) 
                    break;
                else if(tmp < tm)
                {
                    p += tm - 1;
                    goto end;
                }
            }

            p += tm;
end:
            cout << p << '\n';
        }
    }

    return 0;
}