#include<iostream>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    ll a[1000001];
    a[0] = 0, a[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        a[i] %= mod;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << a[x] << endl;
    }

}
