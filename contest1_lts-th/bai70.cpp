#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll res = 0;
    int temp = 1000000007;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        res = res * 10 + a[i];
        res %= temp;
    }
    cout << res << endl;
}