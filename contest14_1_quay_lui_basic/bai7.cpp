#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n, res[15], a[15];
string ten[15];
void nhap()
{
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        cin >> ten[j];
    }
    sort(ten, ten + n + 1);
}

void hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (res[j] == 0)
        {
            res[j] = 1;
            a[i] = j;
            if (i == n)
            {
                for (int pos = 1; pos <= n; pos++)
                {
                    cout << ten[a[pos]] << " ";
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
    nhap();
    hoanvi(1);
    
}
