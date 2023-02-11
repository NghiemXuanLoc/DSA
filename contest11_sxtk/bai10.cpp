#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int binary1(int a[], int n, int x)
{
    int ok = -1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            ok = m;
            r = m - 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ok;
}

int binary2(int a[], int n, int x)
{
    int ok = -1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            ok = m;
            l = m + 1;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ok;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << binary1(a, n, x) << endl;
    cout << binary2(a, n, x) << endl;
    auto it1 = lower_bound(a, a + n, x);
    if (it1 == a + n)
    {
        cout << -1 << endl;
    }
    else
        cout << it1 - a << endl;
    auto it2 = upper_bound(a, a + n, x);
    if (it2 == a + n)
    {
        cout << -1 << endl;
    }
    else
        cout << it2 - a << endl;
    if (binary1(a, n, x) != -1)
    {
        cout << binary2(a, n, x) - binary1(a, n, x) + 1 << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}