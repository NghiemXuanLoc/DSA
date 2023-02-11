#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    int dem[2] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            dem[a[i]]++;
        }

        if (a[i])
        {
            v.push_back(a[i]);
        }
    }
    for (int x : v)
        cout << x << " ";
    for (int i = 0; i < dem[0]; i++)
    {
        cout << 0 << " ";
    }
}