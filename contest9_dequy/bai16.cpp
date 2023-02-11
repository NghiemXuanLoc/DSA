#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll max_val = -1, min_val = 10;

void check(ll n)
{
    if (n < 10)
    {
        max_val = max(max_val, n);
        min_val = min(min_val, n);
        return;
    }
    else
    {
        max_val = max(max_val, n % 10);
        min_val = min(min_val, n % 10);
        return check(n / 10);
    }
}

int main()
{
    ll n;
    cin >> n;
    check(n);
    cout << max_val << " " << min_val << endl;
}
