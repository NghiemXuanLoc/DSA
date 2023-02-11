#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int cnt = 0;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (mp[a[i]] != mp[a[i + 1]])
    //     {
    //         cnt++;
    //     }
    // }
    pair<int, int> temp;
    for (auto x : mp)
    {
        temp.first = x.first;
        temp.second = x.second;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i].second != v[i + 1].second)
        {
            cnt++;
        }
    }

    if (cnt <= 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}