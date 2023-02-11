#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
        {
            s[i] = ' ';
        }
    }
    vector<string> v;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
        v.push_back(" ");
    }
    v.pop_back();
    for (string x : v)
    {
        cout << x;
    }
}