#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s)
{
    int l = 0, r = s.size() - 1;
    int c = 0, le = 0;
    while (l <= s.size() - 1)
    {
        if (l % 2 == 0)
        {
            c += s[l] - '0';
        }
        else
            le += s[l] - '0';
        l++;
    }
    int temp = abs(c - le);
    return temp % 11 == 0;
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