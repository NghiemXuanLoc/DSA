#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int x[101], n, a[101][101], ans = INT_MIN; // x[i] = j, con hau o hang i cot j
bool cot[101], xuoi[101], nguoc[101];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && !xuoi[n + i - j] && !nguoc[i + j - 1])
        {
            x[i] = j;
            cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 1;
            if (i == n)
            {
                int tong = 0;
                for (int k = 1; k <= n; k++)
                {
                    tong += a[k][x[k]];
                }
                ans = max(ans, tong);
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 0;
        }
    }
}

int main()
{
    n = 8;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << ans << endl;
}
