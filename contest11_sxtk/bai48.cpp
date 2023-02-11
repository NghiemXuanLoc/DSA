#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a, b, n;

bool check(ll res)
{
    ll ans1 = res / a, ans2 = res / b;
    return (ans1 * ans2) >= n;
}

int main()
{
    cin >> a >> b >> n;
    ll l = 0, r = max(b * n, a * n), res;
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
}