#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll temp;
    if (n == 1)
    {
        cout << 4 << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            ll temp = n;
            temp *= i;
            ll x = sqrt(temp);
            ll y = x * x;
            if (y == temp)
            {
                cout << temp << endl;
                return 0;
            }
        }
    }
}