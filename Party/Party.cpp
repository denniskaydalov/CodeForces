/*
not finished
*/

#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    node *parent;
    int value;

    int depth()
    {
        if(parent != nullptr)
            return 1 + parent->depth();
        else return 1;
    }
};

int main()
{
    set<node> e { };

    int n, a { };

    for(int i { }, t; i < n; ++i)
    {
        cin >> t;

        node p; 

        p.value = t;

        for(auto& x : e)
        {
            if(x.value == t)
            {
                p = x;
            }
        }

        e.insert(p);

        a = max(p.depth(), a);
    }

    cout << a;

    return 0;
}