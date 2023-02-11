#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    pair<char, int> p;
    int max_val = INT_MIN, min_val = INT_MAX;

    for (auto x : mp)
    {
        max_val = max(max_val, x.second);
        min_val = min(min_val, x.second);
        p.first = x.first;
        p.second = x.second;
    }
    char temp;
    for (auto x : mp)
    {
        if (x.second == max_val)
        {
            cout << x.first << " " << x.second << endl;
            break;
        }
    }
    for (auto x : mp)
    {
        if (x.second == min_val)
        {
            temp = x.first;
        }
    }
    cout << temp << " " << mp[temp] << endl;
    cout << mp.size() << endl;
}