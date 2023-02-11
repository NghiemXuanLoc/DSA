#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dem[1000001];

bool cpm1(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
        return a.first < b.first;
}

bool cpm2(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]])
        {
            pair<int, int> x;
            x.first = a[i];
            x.second = dem[a[i]];
            v.push_back(x);
            dem[a[i]] = 0;
        }
    }
    vector<pair<int, int>> v2(v.begin(), v.end());
    sort(v.begin(), v.end(), cpm1);
    stable_sort(v2.begin(), v2.end(), cpm2);
    for (auto x : v)
    {
        for (int i = 0; i < x.second; i++)
        {
            cout << x.first << " ";
        }
    }
    cout << endl;
    for (auto x : v2)
    {
        for (int i = 0; i < x.second; i++)
        {
            cout << x.first << " ";
        }
    }
}