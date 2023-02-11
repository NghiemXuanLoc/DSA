#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

ll a[1001][1001];
void sinh()
{
    for (int i = 0; i <= 2000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i == j) || (j == 0))
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
}

int main()
{
    sinh();
    ll n, m;
    cin >> n >> m;

    cout << a[n + m - 1][n - 1] << endl;
    
}
