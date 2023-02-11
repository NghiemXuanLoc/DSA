#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
int ok;
ll res[350];

void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '0';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
        s[i] = '8';
}
int main()
{
    s = "0000000000000000000";
    ok = 1;
    vector<ll> v;
    while (ok)
    {
        ll temp = stoll(s);
        v.push_back(temp);
        sinh();
    }
    for (int i = 1; i <= 350; i++)
    {
        for (ll x : v)
        {
            if (x != 0 && x % i == 0)
            {
                res[i] = x;
                break;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << res[x] << endl;
    }
}
