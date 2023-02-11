#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int a[1000001];
ll prime[1000001];

void sang()
{
    for (int i = 0; i <= 1000000; i++)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            a[j] = 0;
        }
    }
    prime[0] = prime[1] = 0;
    prime[2] = 2;
    for (int i = 3; i <= 1000000; i++)
    {
        if (a[i])
        {
            prime[i] = 1ll* prime[i - 1] * i;
            prime[i] %= mod;
        }
        else
            prime[i] = prime[i - 1]; prime[i] %= mod;
    }
}
int main()
{
    sang();
    int t;
    cin >> t;
    // while (t--)
    // {
    //     int x;
    //     cin >> x;
    //     cout << prime[x] << endl;
    // }
    cout << prime[t] << endl;
}
