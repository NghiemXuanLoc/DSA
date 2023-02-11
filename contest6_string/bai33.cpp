#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s)
{
    int l = 0, r = s.size() - 1;
    int ok = 0;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        if (s[l] == '6' || s[r] == '6')
        {
            ok = 1;
        }
        l++;
        r--;
    }
    return ok;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}