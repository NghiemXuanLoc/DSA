#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1], b[m];
    a[n] = -1;
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
    int temp = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            temp++;
            cnt++;
            j++;
        }
        else if (a[i] < b[j])
        {

            if (a[i] == a[i + 1])
            {
                cnt += temp;
            }
            else
                temp = 0;
            i++;
        }
        else
        {
            j++;
        }
    }
    while (i < n)
    {
        if (a[i] == a[i + 1])
        {
            cnt += temp;
        }
        else
            temp = 0;
        i++;
    }

    cout << cnt << endl;
}