#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> v;

void tron(int a[], int n, int b[], int m)
{
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            v.push_back(a[l]);
            l++;
        }
        else
        {
            v.push_back(b[r]);
            r++;
        }
    }
    while (l < n)
    {
        v.push_back(a[l]);
        l++;
    }
    while (r < m)
    {
        v.push_back(b[r]);
        r++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    tron(a, n, b, m);
    for (int x : v)
    {
        cout << x << " ";
    }
}