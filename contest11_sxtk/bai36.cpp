#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = ms.lower_bound(a[i]);
        if (it != ms.begin())
        {
            it--;
            cout << *it << endl;
            ms.erase(it);
        }
        else
            cout << -1 << endl;
    }
}