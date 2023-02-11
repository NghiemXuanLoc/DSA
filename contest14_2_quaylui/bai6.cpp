#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int x[101], n, ans; // x[i] = j, con hau o hang i cot j(cot x[i])
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
                ans++;
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
    cin >> n;
    Try(1);
    cout << ans << endl;
}
