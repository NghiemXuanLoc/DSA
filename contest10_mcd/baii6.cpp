#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum > s)
        {
            sum -= a[l];
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
}