#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int chan(ll n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            return n;
        }
        else
            return 0;
    }
    else
    {
        if (n % 10 % 2 == 0)
        {
            return n % 10 + chan(n / 10);
        }
        else
            return chan(n / 10);
    }
}

int le(ll n)
{
    if (n < 10)
    {
        if (n % 2 == 1)
        {
            return n;
        }
        else
            return 0;
    }
    else
    {
        if (n % 10 % 2 == 1)
        {
            return n % 10 + le(n / 10);
        }
        else
            return le(n / 10);
    }
}
int main()
{
    ll n;
    cin >> n;
    cout << chan(n) << endl << le(n) << endl;
}