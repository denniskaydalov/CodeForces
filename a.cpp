#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
    vector<int> nums { };
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p, m, s { }, r = 2; p <= n; p++)
    {
        if (prime[p])
        {
            r = prime[p];
            while(r > 0)
            {
                m = r % 10;
                s += m;
                r /= 10;
            }
            if(prime[s])
                nums.push_back(1);
        }
    }

    cout << nums.size();
}
 
int main()
{
    int n = 1000000;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}