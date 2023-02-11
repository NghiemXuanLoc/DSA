#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int min_val = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] < min_val)
        {
            min_val = a[i] - a[i - 1];
        }
        }
    cout << min_val << endl;
}