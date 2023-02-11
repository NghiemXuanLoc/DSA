#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    set<ll> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    sort(a, a + n);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (se.size() != 0)
        {
            if (se.find(k + a[i]) != se.end())
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}