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
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            se.insert(a[i]);
        }
        else
        {
            while (a[i])
            {
                se.insert(a[i] % 10);
                a[i] /= 10;
            }
        }
    }
    for (auto it : se)
        cout << it << " ";
}