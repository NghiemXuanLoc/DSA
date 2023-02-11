#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1005][1005];
ll prifix[1005][1005];
int n, m;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prifix[i][j] = prifix[i - 1][j] + prifix[i][j - 1] - prifix[i - 1][j - 1] + a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << prifix[i][j] << " ";
        }
        cout << endl;
    }
}