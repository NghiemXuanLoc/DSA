#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

// phan tich thua so nguyen to ket hop sang so nguyen to
// ta tim uoc nguyen to nho nhat cua tung so trong mang

ll prime[1000005];
void sang()
{
    // buoc 1 coi tat ca cac so tu 1 toi 1tr la cac so nguyen to
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = i;
    }
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                if (prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    sang();
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        while (a[i] != 1)
        {
            mp[prime[a[i]]]++;
            a[i] /= prime[a[i]];
        }
    }
    ll ans = 1;
    for (auto x : mp)
    {
        ans *= (x.second + 1);
        ans %= mod;
    }
    cout << ans << endl;
}
