#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            cnt++;
            j++;
            i++;
        }
        else
            i++;
    }
    cout << cnt << endl;
}