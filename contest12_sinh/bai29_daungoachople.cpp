#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100], ok = 1;

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
    vector<string> v;
    while (ok)
    {
        string s = "";
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                {
                    s += '(';
                }
                else
                    s += ')';
            }
            v.push_back(s);
        }
        sinh();
    }
    sort(v.begin(), v.end());
    if (v.size() != 0)
    {
        for (auto x : v)
            cout << x << endl;
    }
    else
        cout << "NOT FOUND" << endl;
}
