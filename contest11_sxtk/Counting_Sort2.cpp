#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll dem[101];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < dem[i]; j++)
        {
            cout << i << " ";
        }
    }
}