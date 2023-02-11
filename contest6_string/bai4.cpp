#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dem[270];

bool cpm(pair<char, int> a, pair<char, int> b)
{
    if (b.second != a.second)
    {
        return a.second < b.second;
    }
    else
        return a.first < b.first;
}

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    pair<char, int> a[270];
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // dem[s[i]]++;
        mp[s[i]]++;
    }
    for (auto x : mp)
    {
        a[cnt].first = x.first;
        a[cnt].second = x.second;
        cnt++;
    }
    sort(a, a + cnt, cpm);
    cout << a[cnt - 1].first << " " << a[cnt - 1].second << endl;

    char temp;
    for (int i = 0; i < cnt; i++)
    {
        if (a[i].second == a[0].second)
        {
            temp = a[i].first;
        }
    }
    cout << temp << " " << a[0].second << endl;
}