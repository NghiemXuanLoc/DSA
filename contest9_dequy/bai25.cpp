#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int l, int r, int x)
{
    int m = (l + r) / 2;
    if (l <= r)
    {
        if (a[m] == x)
        {
            return true;
        }
    }
    else
        return false;

    if (a[m] > x)
    {
        return check(a, m + 1, r, x);
    }
    else
        return check(a, l, m - 1, x);
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
    cout << check(a, 0, n - 1, x) << endl;
}