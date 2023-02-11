#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(a + i + 1, a + n, x + a[i]);
        if (it != a + n && *it == x + a[i])
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}