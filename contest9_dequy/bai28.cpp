#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int dau = -1;

void check(int a[], int l, int r, int x)
{
    int m = (l + r) / 2;
    if (l <= r)
    {
        if (a[m] == x)
        {
            dau = m;
            check(a, l, m - 1, x);
        }
        else if (a[m] < x)
        {
            check(a, m + 1, r, x);
        }
        else
            check(a, l, m - 1, x);
    }
    else
        return;
}

int cuoi = -1;

void check2(int a[], int l, int r, int x)
{
    int m = (l + r) / 2;
    if (l <= r)
    {
        if (a[m] == x)
        {
            cuoi = m;
            check2(a, m + 1, r, x);
        }
        else if (a[m] < x)
        {
            check2(a, m + 1, r, x);
        }
        else
            check2(a, l, m - 1, x);
    }
    else
        return;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    check(a, 0, n - 1, x);
    check2(a, 0, n - 1, x);
    if (dau != -1)
    {
        cout << cuoi - dau + 1 << endl;
    }
    else
        cout << 0 << endl;
}