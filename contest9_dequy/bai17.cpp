#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void in(ll n)
{
    if (n < 10)
    {
        cout << n << " ";
        return;
    }
    else
    {
        in(n / 10);
        cout << n % 10 << " ";
    }
}

void in2(ll n)
{
    if (n < 10)
    {
        cout << n << endl;
        return;
    }
    else
    {
        cout << n % 10 << " ";
        return in2(n / 10);
    }
}
int main()
{
    ll n;
    cin >> n;
    in(n);
    cout << endl;
    in2(n);
}