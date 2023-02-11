#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    multiset<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    int q;
    cin >> q;
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
                auto temp = se.find(y);
                se.erase(temp);
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