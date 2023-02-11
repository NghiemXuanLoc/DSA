#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

void check(ll &x, ll &y, ll m, ll n)
{
    if (n == 0)
    {
        y = 0;
        x = 1;
    }
    else
    {
        ll x1, y1;
        check(x1, y1, n, m % n);
        x = y1;
        y = x1 - y1 * (m / n);
    }
}

int main()
{
    ll m, n, p, x, y;
    cin >> m >> n >> p;
    check(x, y, m, n);
    if ((x + y) % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
