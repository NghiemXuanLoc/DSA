#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int a[1000005], ok = 1, aa, b, n;
string s = "";

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
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
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != aa && a[i] != b)
        {
            return false;
        }
    }
    return true;
}
bool check2()
{
    for (int i = 1; i <= n; i++)
    {
        s += to_string(a[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != aa && s[i] != b)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    cin >> aa >> b >> n;
    ll cnt = 0;
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = aa;
            }
            else
                a[i] = b;
        }

        if (check2() && check())
        {
            cnt++;
        }
        sinh();
    }
    cout << cnt << endl;
}
