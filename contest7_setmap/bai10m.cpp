#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> se;
    map<int, int> mp;
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
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 2)
        {
            cout << a[i] << " ";
            mp[a[i]] = 0;
        }
    }
}