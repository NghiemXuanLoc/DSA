#include<bits/stdc++.h>

using namespace std;

string a[100005];

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    map<string, int> mp;
    vector<string> v;
    while (ss >> temp)
    {
        mp[temp]++;
        if (mp[temp] == 1)
        {
            v.push_back(temp);
        }
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (string x : v)
    {
        cout << x << " " << mp[x] << endl;
    }
}