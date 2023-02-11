#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, L, a[1000001];

bool check(ll res)
{
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - res >= 0)
        {
            ans += (a[i] - res);
        }
    }
    return ans >= L;
}

int main()
{
    cin >> n >> L;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = *max_element(a, a + n);
    ll res = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(m))
        {
            res = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    cout << res << endl;
}