#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    sum += a[0];
    for (int i = 1; i < 4; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
        else
            sum -= a[i];
    }
    cout << sum << endl;
}
