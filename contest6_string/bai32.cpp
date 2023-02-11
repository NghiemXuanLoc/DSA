#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
        {
            return false;
        }
    }
    return true;
}

bool snt(string s)
{
    ll n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        n += s[i] - '0';
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    string s;
    cin >> s;
    if (check(s) && snt(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}