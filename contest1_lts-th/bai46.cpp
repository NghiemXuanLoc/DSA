#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

// chuyen so dang thap phan ve dang nhi phan
string s = "";
int n, k;

void nhiphan(int k)
{
    if (k == 1)
    {
        s += to_string(k);
    }
    else
    {
        int ans = k;
        nhiphan(k /= 2);
        s += to_string(ans % 2);
    }
}

ll powmod(ll a, ll b){
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

    cin >> n >> k;
    nhiphan(k);
    ll ans = 0, cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        string temp = "";
        temp += s[i];
        ans += 1ll * stoi(temp) * powmod(n, cnt++);
        ans %= mod;
    }
    cout << ans << endl;
}
