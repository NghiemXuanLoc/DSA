#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll m = 1;
    int temp = 1000000007;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m *= a[i];
        m %= temp;
    }
    cout << m << endl;
}