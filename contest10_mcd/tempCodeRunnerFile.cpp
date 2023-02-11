#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        set<int> se;
        int res = k, temp = i;
        while (res--)
        {
            se.insert(a[temp++]);
        }
        cout << *se.begin() << " " << *se.rbegin() << endl;
    }
}