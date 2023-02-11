#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
bool final = false;
// buoc 1 khoi tao cau hinh dau tien

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

// buoc 2 lap

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = true; // tim thay cau hinh cuoi cung.
    }
    else
        a[i] = 1;
}

int main()
{
    cin >> n;
    ktao();
    // lap
    while (!final)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        sinh();
        cout << endl;
    }
    return 0;
}

