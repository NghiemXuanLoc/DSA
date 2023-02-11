#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000002], ok = 1;
const int mod = 1e9 + 7;

void sinh()
{
    int i = n;
    while (i > 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
        a[i] = 1;
}
bool check()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt < 0)
        {
            return false;
        }
        else if (a[i] == 1)
        {
            cnt++;
        }
        else
            cnt--;
    }
    return cnt == 0;
}
int main()
{
    cin >> n;
    int cnt = 0;
    while (ok)
    {
        if (check())
        {
            cnt++;
        }
        sinh();
        cnt %= mod;
    }
    cout << cnt << endl;
}
