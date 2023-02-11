#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int k, int n)
{
    if (k == n - 1)
    {
        if (a[k] % 2 == 0)
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        if (a[k] % 2 == 0)
        {
            return check(a, k + 1, n);
        }
        else
            return false;
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
    if (check(a, 0, n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}