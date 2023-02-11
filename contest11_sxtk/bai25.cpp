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
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cpm);
    ll checkin = a[0].first + a[0].second;
    for (int i = 1; i < n; i++)
    {
        if (checkin < a[i].first)
        {
            checkin = a[i].first;
        }
        checkin += a[i].second;
    }
    cout << checkin << endl;
}