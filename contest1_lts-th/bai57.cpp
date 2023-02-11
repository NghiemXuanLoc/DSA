#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int a, b, c, m;
ll powmod(ll a, ll b)
{
    ll tich = 1;
    while (b)
    {
        if (b % 2)
        {
            tich *= a;
            tich %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return tich;
}

int main()
{
    
    cin >> a >> b >> c >> m;
    ll ab = powmod(a, b) % m;
    c = c % m;
    ll latnguoc = powmod(c, m - 2) % m;
    cout << (ab % m)*(latnguoc % m) % m << endl;
}
