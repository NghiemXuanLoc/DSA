#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tong(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return 1ll * n * n * n + tong(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << tong(n) << endl;
}