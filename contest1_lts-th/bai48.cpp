#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
// const int mod = 1e9 + 7;
int mod = 1e9 + 6;

ll powmod(ll a, ll b)
{
    ll tich = 1;
    while (b)
    {
        if (b % 2)
        {
            tich *= a;
            tich %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return tich;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        mod = 1e9 + 6;
        int a, b, c;
        cin >> a >> b >> c;
        ll r;
        if (b == 0 && c == 0)
        {
            r = 1;
        }
        else
            r = powmod(b, c);
        mod = 1e9 + 7;
        cout << powmod(a, r) << endl;
    }
}
