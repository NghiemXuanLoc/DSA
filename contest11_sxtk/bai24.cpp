#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n);
    ll sum = a[0];
    int tru = n - 1 - k;
    for (int i = 1; i < n; i++)
    {
        if (tru)
        {
            sum -= a[i];
            tru--;
        }
        else
            sum += a[i];
    }
    cout << sum << endl;
}