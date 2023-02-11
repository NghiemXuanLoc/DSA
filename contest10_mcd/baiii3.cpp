#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    int median[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        median[i] = a[i];
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        int res = k, temp = i;
        int ans = a[i];
        while (res--)
        {
            ans = min(ans, a[temp++]);
        }
        cout << ans << " ";
    }
}