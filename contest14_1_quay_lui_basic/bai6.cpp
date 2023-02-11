#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, a[12], res[12];

void hoanvi(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (res[j] == 0)
        {
            res[j] = 1;
            a[i] = j;
            if (i == n)
            {
                for (int pos = 1; pos <= n; pos++)
                {
                    cout << a[pos];
                }
                cout << endl;
            }
            else
                hoanvi(i + 1);
            res[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    hoanvi(1);
}
