#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, k, a[100], res[100];

void tohop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int pos = 1; pos <= k; pos++)
            {
                cout << a[pos];
            }
            cout << endl;
        }
        else
            tohop(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    tohop(1);
}
