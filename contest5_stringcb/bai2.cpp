#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string lat(string s)
{
    string t = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        t += s[i];
    }
    return t;
}

string thuong(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

string hoa(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = toupper(t[i]);
    }
    return t;
}
int main()
{
    string s;
    cin >> s;
    cout << lat(s) << endl
         << thuong(s) << endl
         << hoa(s) << endl;
}