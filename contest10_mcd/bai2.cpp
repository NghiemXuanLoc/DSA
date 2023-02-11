#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll f[n];
    f[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        f[i] = f[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        ll kq = f[r] - f[l - 1];
        if (l == 0)
        {
            cout << f[r] << endl;
        }
        else
            cout << kq << endl;
    }
}