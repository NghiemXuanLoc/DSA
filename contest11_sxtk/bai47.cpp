#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, t, a[2000001];

bool check(ll res)
{
    ll cnt = 0, temp;
    for (int i = 0; i < n; i++)
    {
        temp = res / a[i];
        cnt += temp;
    }
    return cnt >= t;
}

int main()
{
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 1ll * a[n - 1] * t;
    for (int i = 0; i < n; i++)
    {
        l = min(l, 0ll + a[i]);
    }

    ll res = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(m))
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << res << endl;
    // cout << l << " " << r << endl;
}