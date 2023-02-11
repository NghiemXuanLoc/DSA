#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

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
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    ll f[s.size() + 5];
    f[0] = 1;
    for (int i = 1; i <= s.size(); i++)
    {
        f[i] = f[i - 1] * i;
        f[i] %= mod;
    }
    ll mau = 1;
    for (auto x : mp)
    {
        ll temp = x.second;
        mau *= f[temp];
        mau %= mod;
    }
    ll latnguoc = powmod(mau, mod - 2);
    cout << f[s.size()] *latnguoc % mod;
}
