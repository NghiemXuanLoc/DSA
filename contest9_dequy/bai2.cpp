#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tong2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * n + tong2(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << tong2(n) << endl;
}