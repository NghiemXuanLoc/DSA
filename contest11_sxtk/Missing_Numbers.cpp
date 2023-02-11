#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dema[200005], demb[200005];

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    set<int> se, se2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dema[a[i]]++;
        se.insert(a[i]);
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        demb[b[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (se.find(b[i]) == se.end() || dema[b[i]] != demb[b[i]])
        {
            se2.insert(b[i]);
        }
    }
    for (auto x : se2)
        cout << x << " ";
}