#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

// de quy tinh to hop chap k cua n phan tu
// bai toan chia keo cua ole

ll powmod(ll a, ll b)
{
    ll tich = 1;
    while (b)
    {
        if (b % 2 == 1)
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
    // n dua tre va m qua tao
    int n, m;
    cin >> n >> m;
    ll f[n + m + 5];
    f[0] = 1;
    for (int i = 1; i <= n + m + 5; i++)
    {
        f[i] = f[i - 1] * i;
        f[i] %= mod;
    }
    int temp = n - 1, ans = n + m - 1;
    n = ans, m = temp;
    ll mau = f[m] * f[n - m] % mod;
    ll nghichdao = powmod(mau, mod - 2) % mod;
    cout << f[ans] * nghichdao % mod << endl;
}
