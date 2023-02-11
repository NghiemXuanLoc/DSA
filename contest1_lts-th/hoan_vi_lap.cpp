#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;

ll gt(int n)
{
    ll tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich *= i;
    }
    return tich;
}

int main()
{
    int n, k1, k2, k3, k4;
    cin >> n >> k1 >> k2 >> k3 >> k4;
    ll tu = 1, mau = 1;
    tu = gt(n);
    mau = gt(k1) * gt(k2) * gt(k3) * gt(k4);
    cout << tu / mau << endl;
}
