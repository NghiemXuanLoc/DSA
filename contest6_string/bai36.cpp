#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s)
{
    int n = s.size();
    if (n == 1)
    {
        return (s[0] - '0') % 4 == 0;
    }
    else
    {
        int temp = (s[s.size() - 2] - '0') * 10 + (s[s.size() - 1] - '0');
        return temp % 4 == 0;
    }
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