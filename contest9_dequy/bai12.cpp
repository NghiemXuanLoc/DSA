#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void check(ll n)
{
    if (n < 16)
    {
        if (n == 0)
        {
            cout << 0;
        }
        else
        {
            if (n >= 10)
            {
                cout << char(n + 55);
            }
            else
                cout << n;
        }
    }
    else
    {
        int res = n % 16;
        check(n / 16);
        if (res >= 10)
        {
            cout << char(res + 55);
        }
        else
            cout << res;
    }
}

int main()
{
    ll n;
    cin >> n;
    check(n);
}