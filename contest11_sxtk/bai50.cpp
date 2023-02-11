#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, x, y;

bool check(ll res)
{
   ll time = 0;
   time += res / x;
   time += res / y;
   return time >= n - 1;
}

int main()
{
    cin >> n >> x >> y;
    ll l = min(x, y), r = 1ll * n * max(x, y);
    ll res;
    while (l <= r)
    {
        ll m = ((l + r) / 2);
        if (check(m))
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << res + min(x, y) << endl;
}