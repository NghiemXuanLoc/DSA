#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int a[1000001], k, n;

bool check(ll res)
{
    ll sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > res)
        {
            cnt++;
            sum = a[i];
        }
        }
    cnt++;
    return cnt <= k;
}

int main()
{

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = INT_MIN, r = 0, res;
    // l va r la tong nho nhat va lon nhat cua mang
    for (int i = 0; i < n; i++)
    {
        l = max(l, 0ll + a[i]);
        r += a[i];
    }
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(m))
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << res << endl;
}