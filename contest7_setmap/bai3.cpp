#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    set<int> se;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        // if (se.find(a[i]) != se.end())
        // {
        //     cout << a[i] << " ";
        //     se.erase(a[i]);
        // }
        if (mp[a[i]])
        {
            cout << a[i] << " ";
            mp[a[i]] = 0;
        }
    }
}