#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cpm(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
        return a < b;
}

int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        cout << x << " ";
    }
}