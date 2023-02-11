#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll temp = INT_MAX, cnt = 0;
    pair<int, int> ans[2 * n];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        ll res = a[i] - a[i - 1];
        temp = min(temp, res);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == temp)
        {
            ans[cnt].first = a[i - 1];
            ans[cnt].second = a[i];
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << ans[i].first << " " << ans[i].second << " ";
    }
}