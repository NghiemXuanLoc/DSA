#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100], ok;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == n)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = 1;
        }
    }
}

int main()
{
    cin >> n;
    ktao();
    ok = 1;
    vector<string> v, v2;
    // sinh ra tat ca cac cach chon so tu 1 toi n
    while (ok)
    {
        string temp = "";
        for (int i = 1; i <= n; i++)
        {
            temp += to_string(a[i]);
        }
        v.push_back(temp);
        sinh();
    }
    // sinh ra hoan vi cua cac ki tu
    string s = "";
    for (int i = 65; i < 65 + n; i++)
    {
        s += (char)i;
    }
    do
    {
        v2.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    for (auto x : v2)
    {
        for (auto y : v)
        {
            cout << x + y << endl;
        }
    }
}
