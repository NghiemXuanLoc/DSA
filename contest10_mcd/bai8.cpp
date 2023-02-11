#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int tc[100001][4], d[100001];
ll d2[100001];

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            d2[i] = a[i];
        }
        else
            d2[i] = a[i] - a[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> tc[i][j];
        }
    }
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        d[x] += 1;
        d[y + 1] -= 1;
    }
    for (int i = 1; i <= m; i++)
    {
        d[i] += d[i - 1];
    }
    int cnt = 1;
    while (m--)
    {
        int l = tc[cnt][1], r = tc[cnt][2], D = tc[cnt][3];
        d2[l] += 1ll * D*d[cnt];
        d2[r + 1] -= 1ll * D*d[cnt];
        cnt++;
    }
    for (int i = 1; i <= n; i++)
    {
        d2[i] += d2[i - 1];
        cout << d2[i] << " ";
    }
}