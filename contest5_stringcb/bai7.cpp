#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string t = "", c = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            t += s[i];
        }
        else
            c += s[i];
    }
    cout << t << endl
         << c << endl;
}