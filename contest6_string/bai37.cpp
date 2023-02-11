#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    int n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        n += s[i] - '0';
    }
    return n % 3 == 0 && ((s[s.size() - 1] - '0') == 0 || (s[s.size() - 1] - '0') == 5);
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