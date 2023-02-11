#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<ll, ll> mp;
    ll cnt = 0, sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        cnt += mp[(sum % n + n) % n];// luu lai so du cua bien sum cho n
        mp[(sum % n + n) % n]++; // dem so lan xuat hien cua sum khi chia du cho n
    }
    cout << cnt << endl;
}