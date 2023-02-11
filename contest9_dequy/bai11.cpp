#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void check(ll n)
{
    if (n == 1 || n == 0)
    {
        cout << n;
    }
    else
    {
        check(n / 2);
        cout << n % 2;
    }
}

int main()
{
    ll n;
    cin >> n;
    check(n);
}