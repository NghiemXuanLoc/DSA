#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, k, a[100];

int main()
{
    cin >> n >> k;
    int i = k;
    for (int j = 1; j <= k; j++)
    {
        cin >> a[j];
    }
    while (i > 0 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << j << " ";
        }
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int j = 1; j <= k; j++)
        {
            cout << a[j] << " ";
        }
    }
    return 0;
}
