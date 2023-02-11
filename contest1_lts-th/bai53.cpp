#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

ll powmod(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2)
        {
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return ans;
}

ll modun(ll a, ll p)
{
    return powmod(a, p - 2);
}

int main()
{
    int a;
    cin >> a;
    cout << powmod(a, mod - 2) % mod << endl;
}
