#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool check(int a[], int n, int l)
{
    int r = n - 1;
    if (l >= r)
    {
        if (a[l] == a[r])
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        if (a[l] == a[r])
        {
            return check(a, n - 1, l + 1);
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
    if (check(a, n, 0))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}