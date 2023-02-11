#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    int cnt = 0;
    int max_val = a[0];
    while (l < n && r < m)
    {
        if (a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            max_val = a[l];
            cout << cnt << " ";
            r++;
        }
    }
    int ok = 0;
    cnt--;
    while (r < m)
    {
        if (b[r] > max_val)
        {
            r++;
            cout << cnt + 1 << " ";
        }
    }
}