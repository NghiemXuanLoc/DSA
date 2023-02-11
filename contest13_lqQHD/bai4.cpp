#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int a[1000005], prime[1000001];

void check()
{
    for (int i = 0; i <= 1000000; i++)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (a[i] == 1)
        {
            for (int j = i*i; j <= 1000000; j+=i)
            {
                a[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i])
        {
            prime[i] = prime[i - 1] + 1;
        }
        else
            prime[i] = prime[i - 1];
    }
}

int main()
{
    check();
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << prime[x] << endl;
    }
}
