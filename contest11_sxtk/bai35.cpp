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
    int cnt = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] + a[r] <= x)
        {
            cnt++;
            l++;
            r--;
        }
        else
        {
            cnt++;
            r--;
        }
    }

    cout << cnt << endl;
}