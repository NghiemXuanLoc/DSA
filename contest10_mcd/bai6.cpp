#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int d[200002];
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];


    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        d[l] += 1;
        d[r + 1] -= 1;
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] += d[i - 1];
    }
    sort(a + 1, a + n + 1, greater<int>());
    sort(d + 1, d + n + 1, greater<int>());
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += 1ll * a[i] * d[i];
    }
    cout << ans << endl;
}