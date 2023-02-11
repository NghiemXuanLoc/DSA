#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
bool final = false;

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
        final = true;
    }
    else
        a[i] = 1;
}

int main()
{
    cin >> n;
    int b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    ll ans = INT_MAX;
    while (!final)
    {
        ll sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                sum1 += b[i];
            }
            else
                sum2 += b[i];
        }
        ans = min(abs(sum1 - sum2), ans);
        sinh();
    }
    cout << ans << endl;
}