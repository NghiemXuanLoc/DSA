#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    vector<string> v2 = v;
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end(), greater<string>());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : v2)
    {
        cout << x << " ";
    }
}