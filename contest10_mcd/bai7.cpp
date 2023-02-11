#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int f[200001], d[200002];

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        d[l] += 1;
        d[r + 1] -= 1;
    }
    for (int i = 1; i <= 200000; i++)
    {
        d[i] += d[i - 1];
    }
    for (int i = 1; i <= 200000; i++)
    {
        if (d[i] >= k)
        {
            d[i] = 1;
        }
        else
            d[i] = 0;
    }
    for (int i = 1; i <= 200000; i++)
    {
        f[i] = f[i - 1] + d[i];
    }
    
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << f[r] - f[l - 1] << endl;
    }
}