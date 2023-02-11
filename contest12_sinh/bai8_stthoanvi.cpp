#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
bool final = false;

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
    while (i > 0 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
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
}

int main()
{
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ktao();
    vector<vector<int>> v;
    int cnt = 0, ok;
    while (!final)
    {
        ok = 1;
        cnt++;
        for (int i = 1; i <= n; i++)
        {
            if (b[i - 1] != a[i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            cout << cnt << endl;
            break;
        }
        sinh();
    }
}