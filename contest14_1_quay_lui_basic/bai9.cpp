#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, k, a[100], cnt, b[100], ans;

void nhap()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> b[i];
    }
}

void tohop(int i)
{
    for (int j = n - k + i; j > a[i - 1]; j--)
    {
        a[i] = j;
        if (i == k)
        {
            cnt++;
            int ok = 1;
            for (int pos = 1; pos <= k; pos++)
            {
                if (a[pos] != b[pos])
                {
                    ok = 0;
                }
            }
            if (ok)
            {
                ans = cnt;
                return;
            }
        }
        else
            tohop(i + 1);
    }
}

int main()
{
    nhap();
    tohop(1);
    cout << ans << endl;
}
