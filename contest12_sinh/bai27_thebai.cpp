#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
int a[100], ok;

// sinh hoan vi

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int temp = n;
        while (a[i] >= a[temp])
        {
            temp--;
        }
        swap(a[i], a[temp]);
        sort(a + i + 1, a + n + 1);
    }
}

bool check()
{
    for (int i = 2; i <= n; i++)
    {
        if (abs(a[i] - a[i - 1]) == 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    ktao();
    ok = 1;
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
}
