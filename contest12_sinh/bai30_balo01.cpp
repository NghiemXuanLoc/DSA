#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, s, a[1001], ok;

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
        a[i] = 1;
}

bool cpm(pair<int, int> a, pair<int, int> b)
{
    return float(a.second / a.first) < float(b.second / b.first);
}
int main()
{
    cin >> n >> s;
    pair<int, int> balo[n + 1];
    // first luu khoi luong, second luu gia tri cua do vat;
    for (int i = 1; i <= n; i++)
    {
        cin >> balo[i].first;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> balo[i].second;
    }
    sort(balo + 1, balo + n + 1, cpm);
    ll res = INT_MIN;
    ok = 1;
    while (ok)
    {
        ll kl = 0, gt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                kl += balo[i].first;
                gt += balo[i].second;
            }
        }
        if (kl <= s)
        {
            res = max(res, gt);
        }
        sinh();
    }
    cout << res << endl;
}
