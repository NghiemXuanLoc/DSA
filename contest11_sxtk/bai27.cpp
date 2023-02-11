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
    vector<int> v(a, a + n);
    sort(a, a + n);
    for (int i = 0; i < v.size(); i++)
    {
        auto it = upper_bound(a, a + n, v[i]);
        if (it != a + n)
        {
            cout << *it << " ";
        }
        else
            cout << "_"
                 << " ";
    }
}