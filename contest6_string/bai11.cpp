#include<iostream>
#include<bits/stdc++.h>

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
    vector<string> v2(v);
    sort(begin(v), end(v));
    sort(begin(v2), end(v2), cpm);
    for (string x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    for (string x : v2)
    {
        cout << x << " ";
    }
}