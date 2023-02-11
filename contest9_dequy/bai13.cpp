#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int tong(ll n)
{
    if (n < 10)
    {
        return n;
    }
    else
        return n % 10 + tong(n / 10);
}

int main()
{
    ll n;
    cin >> n;
    cout << tong(n) << endl;
}