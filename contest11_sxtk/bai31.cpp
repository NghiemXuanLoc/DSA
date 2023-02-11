#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cpm(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int s;
    int n;
    cin >> n >> s;
    ll sm = s;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cpm);
    for (int i = 0; i < n; i++)
    {
        if (sm > a[i].first)
        {
            sm += a[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}