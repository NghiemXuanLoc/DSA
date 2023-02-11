#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n + 1], ok = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        ok = 0;
    }
    else
    {
        int temp = n;
        while (a[i] > a[temp])
        {
            temp--;
        }
        swap(a[i], a[temp]);
        sort(a + i + 1, a + n + 1);
    }
    if (ok)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[j] << " ";
        }
    }
}