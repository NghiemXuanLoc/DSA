#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string chuanhoa(string s)
{
    string t = s;
    if (t[1] == '/')
    {
        t.insert(0, "0");
    }
    if (t[4] == '/')
    {
        t.insert(3, "0");
    }
    return t;
}
int main()
{
    string s;
    cin >> s;
    cout << chuanhoa(s) << endl;
}