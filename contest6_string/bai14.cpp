#include<bits/stdc++.h>
using namespace std;

bool cpm(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
        return a.first < b.first;
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    map<string, int> mp;
    while (ss >> temp)
    {
        mp[temp]++;
    }
    int cnt = 0, min_val = INT_MAX;
    int ans = 0;
    vector<pair<string, int>> v;
    for (auto x : mp)
    {
        min_val = min(min_val, x.second);
        pair<string, int> z;
        z.first = x.first;
        z.second = x.second;
        v.push_back(z);
    }
    sort(v.begin(), v.end(), cpm);
    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << endl;
    string res = "";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i].second == min_val)
    //     {
    //         res = v[i].first;
    //     }
    // }
    for (pair<string, int> x : v)
    {
        if (x.second == min_val)
        {
            res = x.first;
        }
    }
    cout << res << " " << min_val << endl;
}