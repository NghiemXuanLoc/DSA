#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    ll uoc = 1;
    while (t--)
    {
        int p, e;
        cin >> p >> e;
        uoc *= (e + 1);
        uoc %= 1000000007;
    }
    cout << uoc << endl;
    
}