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
    int n, k;
    cin >> n >> k;
    ll f[n + 1];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = f[i - 1] * i;
        f[i] %= mod;
    }
    ll mau = (f[k] * f[n - k]) % mod;
    ll latnguoc = modun(mau, mod);
    cout << (f[n] * (latnguoc % mod)) % mod << endl;
}
