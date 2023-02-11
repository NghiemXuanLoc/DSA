#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll d[n + 5];
    d[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        d[i] = a[i] - a[i - 1];
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;
    }
    ll f[n + 5];
    f[0] = d[0];
    cout << f[0] << " ";
    for (int i = 1; i < n; i++)
    {
        f[i] = f[i - 1] + d[i];
        cout << f[i] << " ";
    }
}