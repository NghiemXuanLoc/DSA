#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    double min_val = max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; i++)
    {
        min_val = max(min_val, ((double)(a[i] - a[i - 1])) / 2);
    }
    cout << fixed << setprecision(10) << min_val << endl;
}