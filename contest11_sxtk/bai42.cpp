#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    ll cnt = 0, sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        sum += k;
        cnt += mp[sum - x];
        mp[sum]++;
    }
    cout << cnt << endl;
}