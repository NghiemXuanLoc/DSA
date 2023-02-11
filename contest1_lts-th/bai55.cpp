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
    int n, k1, k2, k3, k4;
    cin >> n >> k1 >> k2 >> k3 >> k4;
    ll f[n + 1];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = f[i - 1] * i;
        f[i] %= mod;
    }
    ll tu = f[n] % mod, mau = (f[k1] % mod * f[k2] % mod * f[k3] % mod * f[k4] % mod) % mod;
    ll latnguoc = modun(mau, mod);
    cout << (tu * (latnguoc % mod)) % mod << endl;
}
