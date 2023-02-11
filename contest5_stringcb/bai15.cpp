#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string lat(string s)
{
    string t = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        t += s[i];
    }

    return t;
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    int cnt = 1;
    while (ss >> temp)
    {
        if (cnt % 2 == 0)
        {
            v.push_back(lat(temp));
            v.push_back(" ");
        }
        else
        {
            v.push_back(temp);
            v.push_back(" ");
        }
        cnt++;
    }
    v.pop_back();
    for (string x : v)
    {
        cout << x;
    }
}