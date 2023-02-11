#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (mp[b[i]] == 1)
        {
            mp[b[i]] = 2;
        }
        else if (mp[b[i]] != 2)
        {
            mp[b[i]] = 1;
        }
    }
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            cout << x.first << " ";
            // se.insert(x.first);
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     if (mp[b[i]] != 2)
    //     {
    //         se.insert(b[i]);
    //     }
    // }
    // for (auto x : se)
    // {
    //     cout << x << " ";
    // }
}