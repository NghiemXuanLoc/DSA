#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s)
{
    int l = 0, r = s.size() - 2;
    while (l <= r)
    {
        if (s[l] < s[l + 1])
        {
            return false;
        }
        l++;
    }
    return true;
}

bool check2(string s)
{
    int l = 0;
    while (l <= s.size() - 2)
    {
        if (s[l] > s[l + 1])
        {
            return false;
        }
        l++;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (check(s) || check2(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}