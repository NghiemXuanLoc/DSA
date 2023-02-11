// bai nay lm theo cach tong quat de tinh ra nghich dao modun cua 1 so

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

ll check(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    else
    {
        ll x1, y1;
        ll d = check(b, a % b, x1, y1);
        x = y1;
        y = x1 - y1 * (a / b);
        return d;
    }
}

ll rever(ll x, ll b)
{
    return (x % b + b) % b;
}

int main()
{
    ll a, b, x, y;
    cin >> a >> b;
    ll ans = check(a, b, x, y);
    if (ans != 1)
    {
        cout << -1 << endl;
    }
    else
        cout << rever(x, b) << endl;
}
