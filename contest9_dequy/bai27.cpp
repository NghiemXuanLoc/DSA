#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int temp = -1;

void check(int a[], int l, int r, int x)
{
    int m = (l + r) / 2;
    if (l <= r)
    {
        if (a[m] > x)
        {
            temp = m;
            check(a, m + 1, r, x);
        }
    }
    else
        return;

    if (a[m] <= x)
    {
        check(a, l, m - 1, x);
    }
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
    if (temp != -1)
    {
        cout << temp << endl;
    }
    else
        cout << n << endl;
}