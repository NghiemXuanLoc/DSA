#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set<int> se;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            se.insert(y);
        }
        else if (x == 2)
        {
            if (se.find(y) != se.end())
            {
                se.erase(y);
            }
        }
        else
        {
            if (se.find(y) != se.end())
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}