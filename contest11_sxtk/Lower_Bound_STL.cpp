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
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(a, a + n, x);
        if (*it == x)
        {
            cout << "Yes " << it - a + 1 << endl;
        }
        else
            cout << "No " << it - a + 1 << endl;
    }
}