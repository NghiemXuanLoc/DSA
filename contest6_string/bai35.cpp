#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string s)
{
    int l = 0, r = s.size() - 1;
    int n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        n += s[i] - '0';
    }
    return n % 3 == 0 && ((s[r] - '0') % 2 == 0);
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