#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dem[200001];

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    ll cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (mp[i + 1] < mp[i])
        {
            cnt++;
        }
    }
    cnt++;
    cout << cnt << endl;
}